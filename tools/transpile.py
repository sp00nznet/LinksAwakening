#!/usr/bin/env python3
"""
RGBDS Assembly to C Transpiler for Link's Awakening Static Recompilation.

Parses RGBDS-format .asm files from the LADX Disassembly project and
translates SM83 instructions into C code using the gb_runtime/gb_cpu helpers.

Follows INCLUDE directives from main.asm to process files in the correct
order and track bank assignments from SECTION directives.

Usage:
    python transpile.py <disasm_dir> <output_dir> [--rom-banks 32]
"""

import sys
import os
import re
from collections import OrderedDict

NUM_BANKS_DEFAULT = 32  # Original GB has 32 banks (0x00-0x1F)


class Transpiler:
    def __init__(self, disasm_dir, output_dir, num_banks=32):
        self.disasm_dir = disasm_dir
        self.output_dir = output_dir
        self.num_banks = num_banks
        self.src_dir = os.path.join(disasm_dir, 'src')

        # Collected state
        self.constants = {}       # name -> int value
        self.equs_strings = {}    # name -> string (EQUS defines)
        self.labels = {}          # name -> (bank, addr) where addr is ROM address or -1
        self.wram_addrs = {}      # name -> addr
        self.hram_addrs = {}      # name -> addr
        self.local_labels = {}    # "Global.local" -> (bank, addr)

        # Per-bank output
        self.bank_lines = {}      # bank -> list of C lines
        self.bank_functions = {}  # bank -> list of func names
        self.all_functions = set()

        # Parse state
        self.current_bank = 0
        self.current_global_label = None
        self.in_macro_def = False
        self.macro_defs = {}      # macro_name -> list of lines
        self.current_macro_name = None
        self.if_depth = 0
        self.if_skip_depth = 0    # depth at which we started skipping
        self.skipping = False

        for b in range(num_banks):
            self.bank_lines[b] = []
            self.bank_functions[b] = []

    # ── Naming helpers ──

    def c_name(self, label):
        """Convert assembly label to valid C identifier."""
        name = label.replace('::', '_').replace(':', '').replace('.', '_')
        name = re.sub(r'[^a-zA-Z0-9_]', '_', name)
        if name and name[0].isdigit():
            name = '_' + name
        # Avoid C keywords
        if name in ('int', 'char', 'void', 'return', 'if', 'else', 'while',
                     'for', 'do', 'switch', 'case', 'break', 'continue',
                     'default', 'goto', 'struct', 'union', 'enum', 'typedef',
                     'static', 'extern', 'const', 'register', 'volatile',
                     'unsigned', 'signed', 'short', 'long', 'float', 'double'):
            name = name + '_'
        return name

    def parse_number(self, s):
        """Parse a number from RGBDS syntax."""
        s = s.strip()
        if s.startswith('$'):
            try: return int(s[1:], 16)
            except: return None
        if s.startswith('%'):
            try: return int(s[1:], 2)
            except: return None
        if s.startswith('0x'):
            try: return int(s, 16)
            except: return None
        try: return int(s)
        except: return None

    def fmt_hex(self, n, width=2):
        """Format a number as hex."""
        if n < 0:
            return str(n)
        if width == 4:
            return f"0x{n & 0xFFFF:04X}"
        return f"0x{n & 0xFF:02X}"

    def label_address(self, name):
        """Try to determine the GB memory address of a label."""
        # func_NNN_XXXX or Data_NNN_XXXX pattern - address encoded in name
        m = re.match(r'(?:func|Data|label)_([0-9A-Fa-f]+)_([0-9A-Fa-f]+)$', name)
        if m:
            return int(m.group(2), 16)
        # Check labels dict (now stores (bank, addr))
        if name in self.labels:
            bank, addr = self.labels[name]
            if isinstance(addr, int) and addr >= 0:
                return addr
        # Check local labels
        if name in self.local_labels:
            bank, addr = self.local_labels[name]
            if isinstance(addr, int) and addr >= 0:
                return addr
        # Check wram/hram/constants
        if name in self.wram_addrs:
            return self.wram_addrs[name]
        if name in self.hram_addrs:
            return self.hram_addrs[name]
        if name in self.constants and isinstance(self.constants[name], int):
            return self.constants[name]
        return None

    def try_resolve_to_int(self, expr):
        """Try to resolve an expression to a numeric value, return None if not possible."""
        expr = expr.strip()
        if not expr:
            return None

        # Strip balanced outer parens
        while expr.startswith('(') and expr.endswith(')'):
            depth = 0
            balanced = True
            for i, ch in enumerate(expr):
                if ch == '(':
                    depth += 1
                elif ch == ')':
                    depth -= 1
                    if depth == 0 and i < len(expr) - 1:
                        balanced = False
                        break
            if balanced:
                expr = expr[1:-1].strip()
            else:
                break

        num = self.parse_number(expr)
        if num is not None:
            return num

        if expr in self.constants and isinstance(self.constants[expr], int):
            return self.constants[expr]
        if expr in self.wram_addrs:
            return self.wram_addrs[expr]
        if expr in self.hram_addrs:
            return self.hram_addrs[expr]

        # Label address
        addr = self.label_address(expr)
        if addr is not None:
            return addr

        # Try binary ops at top-level (respecting parentheses)
        for op in [' + ', ' - ', ' * ', ' / ', ' | ', ' & ', ' ^ ', ' << ', ' >> ']:
            idx = self._find_top_level_op(expr, op)
            if idx is not None:
                left_val = self.try_resolve_to_int(expr[:idx])
                right_val = self.try_resolve_to_int(expr[idx+len(op):])
                if left_val is not None and right_val is not None:
                    try:
                        op_str = op.strip()
                        if op_str == '+': return left_val + right_val
                        elif op_str == '-': return left_val - right_val
                        elif op_str == '*': return left_val * right_val
                        elif op_str == '/': return left_val // right_val if right_val != 0 else None
                        elif op_str == '|': return left_val | right_val
                        elif op_str == '&': return left_val & right_val
                        elif op_str == '^': return left_val ^ right_val
                        elif op_str == '<<': return left_val << right_val
                        elif op_str == '>>': return left_val >> right_val
                    except:
                        pass

        # Handle compact +/- expressions like wLabel+N, wLabel+$18, wLabel-N
        m_plus = re.match(r'^(\w+)\+(.+)$', expr)
        if m_plus:
            left_val = self.try_resolve_to_int(m_plus.group(1))
            right_val = self.try_resolve_to_int(m_plus.group(2))
            if left_val is not None and right_val is not None:
                return left_val + right_val
        m_minus = re.match(r'^(\w+)-(.+)$', expr)
        if m_minus:
            left_val = self.try_resolve_to_int(m_minus.group(1))
            right_val = self.try_resolve_to_int(m_minus.group(2))
            if left_val is not None and right_val is not None:
                return left_val - right_val

        # Prefix ~
        if expr.startswith('~'):
            val = self.try_resolve_to_int(expr[1:])
            if val is not None:
                return ~val

        return None

    def _find_top_level_op(self, expr, op):
        """Find the rightmost occurrence of op at top level (not inside parens)."""
        depth = 0
        best = None
        i = 0
        while i < len(expr):
            ch = expr[i]
            if ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
            elif depth == 0 and expr[i:i+len(op)] == op:
                best = i
            i += 1
        return best

    def resolve_expr(self, expr):
        """Resolve an expression to a C expression string."""
        expr = expr.strip()
        if not expr:
            return "0"

        # Strip balanced outer parens for resolution
        stripped = expr
        while stripped.startswith('(') and stripped.endswith(')'):
            depth = 0
            balanced = True
            for i, ch in enumerate(stripped):
                if ch == '(':
                    depth += 1
                elif ch == ')':
                    depth -= 1
                    if depth == 0 and i < len(stripped) - 1:
                        balanced = False
                        break
            if balanced:
                stripped = stripped[1:-1].strip()
            else:
                break
        expr = stripped

        # Try to resolve to a numeric constant first
        num_val = self.try_resolve_to_int(expr)
        if num_val is not None:
            if num_val > 255:
                return self.fmt_hex(num_val, 4)
            elif num_val > 9:
                return self.fmt_hex(num_val)
            return str(num_val)

        # Direct number
        num = self.parse_number(expr)
        if num is not None:
            if num > 255:
                return self.fmt_hex(num, 4)
            elif num > 9:
                return self.fmt_hex(num)
            return str(num)

        # Known constant
        if expr in self.constants:
            val = self.constants[expr]
            if isinstance(val, int):
                return self.fmt_hex(val, 4 if val > 255 else 2)
            return self.c_name(expr)

        # WRAM/HRAM reference
        if expr in self.wram_addrs:
            return self.fmt_hex(self.wram_addrs[expr], 4)
        if expr in self.hram_addrs:
            return self.fmt_hex(self.hram_addrs[expr], 4)

        # HIGH()/LOW() - resolve to numeric constant if possible
        m = re.match(r'HIGH\s*\((.+)\)', expr, re.IGNORECASE)
        if m:
            inner_raw = m.group(1).strip()
            addr = self.label_address(inner_raw)
            if addr is not None:
                return self.fmt_hex((addr >> 8) & 0xFF)
            inner = self.resolve_expr(inner_raw)
            return f"(({inner} >> 8) & 0xFF)"
        m = re.match(r'LOW\s*\((.+)\)', expr, re.IGNORECASE)
        if m:
            inner_raw = m.group(1).strip()
            addr = self.label_address(inner_raw)
            if addr is not None:
                return self.fmt_hex(addr & 0xFF)
            inner = self.resolve_expr(inner_raw)
            return f"({inner} & 0xFF)"

        # BANK()
        m = re.match(r'BANK\s*\((.+)\)', expr, re.IGNORECASE)
        if m:
            label = m.group(1).strip()
            if label in self.labels:
                return str(self.labels[label][0])
            return "0"

        # Boolean TRUE/FALSE
        if expr == 'TRUE':
            return '1'
        if expr == 'FALSE':
            return '0'

        # Simple binary ops (paren-aware)
        for op in [' | ', ' & ', ' ^ ', ' + ', ' - ', ' * ', ' / ', ' << ', ' >> ']:
            idx = self._find_top_level_op(expr, op)
            if idx is not None and idx > 0:
                left = self.resolve_expr(expr[:idx])
                right = self.resolve_expr(expr[idx+len(op):])
                return f"({left} {op.strip()} {right})"

        # Prefix ~
        if expr.startswith('~'):
            return f"(~{self.resolve_expr(expr[1:])})"

        # Handle compact +/- that try_resolve_to_int couldn't fully resolve
        # (e.g., expressions where one side resolves but not the other)
        m_plus = re.match(r'^(\w+)\+(.+)$', expr)
        if m_plus:
            left = self.resolve_expr(m_plus.group(1))
            right = self.resolve_expr(m_plus.group(2))
            return f"({left} + {right})"
        m_minus = re.match(r'^(\w+)-(.+)$', expr)
        if m_minus:
            left = self.resolve_expr(m_minus.group(1))
            right = self.resolve_expr(m_minus.group(2))
            return f"({left} - {right})"

        # Check if it's a qualified local label (e.g., "DialogBoxOrigin.high")
        # and resolve to its address if known
        if '.' in expr:
            addr = self.label_address(expr)
            if addr is not None:
                return self.fmt_hex(addr, 4)
            # Also try the sanitized name in local_labels
            cname = self.c_name(expr)
            for lbl, (bank, addr) in self.local_labels.items():
                if self.c_name(lbl) == cname and isinstance(addr, int) and addr >= 0:
                    return self.fmt_hex(addr, 4)

        # Just return sanitized name
        return self.c_name(expr)

    # ── Register translation ──

    REG_MAP = {
        'A': 'gb.regs.a', 'B': 'gb.regs.b', 'C': 'gb.regs.c',
        'D': 'gb.regs.d', 'E': 'gb.regs.e', 'H': 'gb.regs.h',
        'L': 'gb.regs.l', 'F': 'gb.regs.f',
        'AF': 'gb.regs.af', 'BC': 'gb.regs.bc',
        'DE': 'gb.regs.de', 'HL': 'gb.regs.hl',
        'SP': 'gb.regs.sp',
    }

    def reg(self, r):
        return self.REG_MAP.get(r.strip().upper(), r)

    def is_reg(self, s):
        return s.strip().upper() in self.REG_MAP

    def is_reg16(self, s):
        return s.strip().upper() in ('AF', 'BC', 'DE', 'HL', 'SP')

    def is_reg8(self, s):
        return s.strip().upper() in ('A', 'B', 'C', 'D', 'E', 'H', 'L', 'F')

    # ── Operand translation ──

    def read_operand(self, op, for_reg16=False):
        """Translate an operand to a C read expression.
        If for_reg16=True, labels should be resolved as addresses (uint16_t)."""
        op = op.strip()

        # Memory indirect [XX]
        if op.startswith('[') and op.endswith(']'):
            inner = op[1:-1].strip()
            iu = inner.upper()

            if iu in ('HL', 'BC', 'DE'):
                return f"gb_read({self.reg(inner)})"
            if iu in ('HL+', 'HLI'):
                return "gb_read(gb.regs.hl++)"
            if iu in ('HL-', 'HLD'):
                return "gb_read(gb.regs.hl--)"
            if iu == 'C':
                return "gb_read(0xFF00 + gb.regs.c)"

            # Address
            num = self.parse_number(inner)
            if num is not None:
                return f"gb_read({self.fmt_hex(num, 4)})"

            # WRAM/HRAM label or expression
            resolved = self.resolve_expr(inner)
            return f"gb_read({resolved})"

        # Register
        if self.is_reg(op):
            return self.reg(op)

        # Label used as address value (e.g., ld hl, SomeLabel)
        # These are ROM/VRAM addresses being loaded as 16-bit values
        if for_reg16 and not self.parse_number(op) and op in self.labels:
            # Return the label's address if known, or a placeholder
            return self.resolve_expr(op)

        # Immediate
        return self.resolve_expr(op)

    def write_operand(self, dest, val_expr):
        """Generate a C write statement for destination."""
        dest = dest.strip()

        if dest.startswith('[') and dest.endswith(']'):
            inner = dest[1:-1].strip()
            iu = inner.upper()

            if iu in ('HL', 'BC', 'DE'):
                return f"gb_write({self.reg(inner)}, {val_expr})"
            if iu in ('HL+', 'HLI'):
                return f"gb_write(gb.regs.hl++, {val_expr})"
            if iu in ('HL-', 'HLD'):
                return f"gb_write(gb.regs.hl--, {val_expr})"
            if iu == 'C':
                return f"gb_write(0xFF00 + gb.regs.c, {val_expr})"

            num = self.parse_number(inner)
            if num is not None:
                return f"gb_write({self.fmt_hex(num, 4)}, {val_expr})"

            resolved = self.resolve_expr(inner)
            return f"gb_write({resolved}, {val_expr})"

        if self.is_reg(dest):
            return f"{self.reg(dest)} = {val_expr}"

        return f"/* write {dest} = {val_expr} */"

    def addr_of_operand(self, op):
        """Get the address expression from an indirect operand like [HL]."""
        if not (op.startswith('[') and op.endswith(']')):
            return None
        inner = op[1:-1].strip()
        iu = inner.upper()
        if iu in ('HL', 'BC', 'DE'):
            return self.reg(inner)
        if iu == 'C':
            return "0xFF00 + gb.regs.c"
        num = self.parse_number(inner)
        if num is not None:
            return self.fmt_hex(num, 4)
        return self.resolve_expr(inner)

    # ── Condition flags ──

    COND_MAP = {
        'Z': 'GET_FLAG_Z()', 'NZ': '!GET_FLAG_Z()',
        'C': 'GET_FLAG_C()', 'NC': '!GET_FLAG_C()',
    }

    def cond(self, c):
        return self.COND_MAP.get(c.strip().upper(), f'/* cond {c} */')

    # ── Instruction translation ──

    def translate_instr(self, opcode, operands_str):
        """Translate one SM83 instruction to a C statement."""
        op = opcode.upper()
        raw_ops = operands_str.strip() if operands_str else ''

        # Split operands carefully (respecting brackets)
        ops = self.split_operands(raw_ops)

        # ── NOP ──
        if op == 'NOP':
            return '/* nop */'

        # ── LD / LDH / LDI / LDD ──
        if op in ('LD', 'LDH', 'LDI', 'LDD'):
            if len(ops) < 2:
                return f'/* {op} {raw_ops} */'
            dst, src = ops[0], ops[1]

            if op == 'LDI':
                if dst.upper() == 'A':
                    return 'gb.regs.a = gb_read(gb.regs.hl++)'
                return 'gb_write(gb.regs.hl++, gb.regs.a)'
            if op == 'LDD':
                if dst.upper() == 'A':
                    return 'gb.regs.a = gb_read(gb.regs.hl--)'
                return 'gb_write(gb.regs.hl--, gb.regs.a)'

            # LD SP, HL
            if dst.upper() == 'SP' and src.upper() == 'HL':
                return 'gb.regs.sp = gb.regs.hl'

            # LD HL, SP+n
            m = re.match(r'SP\s*\+\s*(.+)', src, re.IGNORECASE)
            if m and dst.upper() == 'HL':
                return f'gb.regs.hl = alu_add_sp_signed((int8_t){self.resolve_expr(m.group(1))})'

            # Determine if loading into a 16-bit register
            is_16bit = dst.upper() in ('BC', 'DE', 'HL', 'SP')
            val = self.read_operand(src, for_reg16=is_16bit)
            return self.write_operand(dst, val)

        # ── ALU 8-bit ──
        alu8 = {'ADD': 'alu_add8', 'ADC': 'alu_adc8', 'SUB': 'alu_sub8',
                'SBC': 'alu_sbc8', 'AND': 'alu_and8', 'OR': 'alu_or8',
                'XOR': 'alu_xor8'}
        if op in alu8:
            if len(ops) == 1:
                src = self.read_operand(ops[0])
                return f'gb.regs.a = {alu8[op]}(gb.regs.a, {src})'
            elif len(ops) == 2:
                if ops[0].upper() == 'HL':
                    return f'gb.regs.hl = alu_add16(gb.regs.hl, {self.read_operand(ops[1])})'
                if ops[0].upper() == 'SP':
                    return f'gb.regs.sp = alu_add_sp_signed((int8_t){self.resolve_expr(ops[1])})'
                if ops[0].upper() == 'A':
                    # add a, [hl] or add a, n
                    src = self.read_operand(ops[1])
                    return f'gb.regs.a = {alu8[op]}(gb.regs.a, {src})'
                src = self.read_operand(ops[1])
                return f'gb.regs.a = {alu8[op]}(gb.regs.a, {src})'

        if op == 'CP':
            src = self.read_operand(ops[0]) if ops else '0'
            return f'alu_cp8(gb.regs.a, {src})'

        # ── INC / DEC ──
        if op == 'INC':
            r = ops[0].strip() if ops else ''
            if self.is_reg16(r):
                return f'{self.reg(r)}++'
            if r.startswith('['):
                addr = self.addr_of_operand(r)
                return f'gb_write({addr}, alu_inc8(gb_read({addr})))'
            return f'{self.reg(r)} = alu_inc8({self.reg(r)})'

        if op == 'DEC':
            r = ops[0].strip() if ops else ''
            if self.is_reg16(r):
                return f'{self.reg(r)}--'
            if r.startswith('['):
                addr = self.addr_of_operand(r)
                return f'gb_write({addr}, alu_dec8(gb_read({addr})))'
            return f'{self.reg(r)} = alu_dec8({self.reg(r)})'

        # ── Rotate A ──
        if op == 'RLCA': return 'alu_rlca()'
        if op == 'RRCA': return 'alu_rrca()'
        if op == 'RLA':  return 'alu_rla()'
        if op == 'RRA':  return 'alu_rra()'

        # ── CB-prefix ops ──
        cb = {'RLC': 'alu_rlc', 'RRC': 'alu_rrc', 'RL': 'alu_rl', 'RR': 'alu_rr',
              'SLA': 'alu_sla', 'SRA': 'alu_sra', 'SRL': 'alu_srl', 'SWAP': 'alu_swap'}
        if op in cb:
            r = ops[0].strip() if ops else ''
            if r.startswith('['):
                addr = self.addr_of_operand(r)
                return f'gb_write({addr}, {cb[op]}(gb_read({addr})))'
            return f'{self.reg(r)} = {cb[op]}({self.reg(r)})'

        if op == 'BIT' and len(ops) == 2:
            bit = self.resolve_expr(ops[0])
            r = ops[1].strip()
            val = self.read_operand(r)
            return f'alu_bit({bit}, {val})'

        if op == 'SET' and len(ops) == 2:
            bit = self.resolve_expr(ops[0])
            r = ops[1].strip()
            if r.startswith('['):
                addr = self.addr_of_operand(r)
                return f'gb_write({addr}, alu_set({bit}, gb_read({addr})))'
            return f'{self.reg(r)} = alu_set({bit}, {self.reg(r)})'

        if op == 'RES' and len(ops) == 2:
            bit = self.resolve_expr(ops[0])
            r = ops[1].strip()
            if r.startswith('['):
                addr = self.addr_of_operand(r)
                return f'gb_write({addr}, alu_res({bit}, gb_read({addr})))'
            return f'{self.reg(r)} = alu_res({bit}, {self.reg(r)})'

        # ── Special ──
        if op == 'DAA': return 'alu_daa()'
        if op == 'CPL': return 'alu_cpl()'
        if op == 'SCF': return 'alu_scf()'
        if op == 'CCF': return 'alu_ccf()'

        # ── Stack ──
        if op == 'PUSH':
            r = ops[0].strip().upper() if ops else 'AF'
            return f'gb_push16({self.reg(r)})'
        if op == 'POP':
            r = ops[0].strip().upper() if ops else 'AF'
            s = f'{self.reg(r)} = gb_pop16()'
            if r == 'AF':
                s += '; gb.regs.f &= 0xF0'
            return s

        # ── Jumps ──
        if op == 'JP':
            if len(ops) == 1:
                t = ops[0].strip()
                if t.upper() in ('HL', '[HL]'):
                    return '/* jp hl - dynamic dispatch */'
                return self.emit_jump(t)
            if len(ops) == 2:
                return self.emit_cond_jump(ops[0], ops[1])

        if op == 'JR':
            if len(ops) == 1:
                return self.emit_jump(ops[0])
            if len(ops) == 2:
                return self.emit_cond_jump(ops[0], ops[1])

        # ── Calls ──
        if op == 'CALL':
            if len(ops) == 1:
                return f'{self.label_call(ops[0])}()'
            if len(ops) == 2:
                return f'if ({self.cond(ops[0])}) {self.label_call(ops[1])}()'

        # ── Return ──
        if op == 'RET':
            if not ops:
                return 'return'
            return f'if ({self.cond(ops[0])}) return'
        if op == 'RETI':
            return 'gb.regs.ime = true; return'

        # ── RST ──
        if op == 'RST':
            n = self.parse_number(ops[0]) if ops else 0
            if n == 0:
                return '/* JP_TABLE / rst 0 - jump table dispatch */'
            return f'/* rst {self.fmt_hex(n or 0)} */'

        # ── Misc ──
        if op == 'HALT': return 'gb_halt()'
        if op == 'STOP': return '/* stop */'
        if op == 'DI':   return 'gb.regs.ime = false'
        if op == 'EI':   return 'gb.regs.ime = true'

        return f'/* TODO: {opcode} {raw_ops} */'

    def is_local_target(self, target):
        """Check if a jump target is a local label (within current function)."""
        t = target.strip()
        return t.startswith('.')

    def emit_jump(self, target):
        """Emit a jump (JP/JR) as either goto or tail call."""
        t = target.strip()
        if self.is_local_target(t):
            full = f"{self.current_global_label}{t}" if self.current_global_label else t
            return f'goto {self.c_name(full)}'
        # Check if target is a qualified local label (e.g., RenderLoop.waitForNextFrame)
        if '.' in t:
            # Cross-function local label reference -> tail call
            cname = self.c_name(t)
            if not hasattr(self, '_cross_func_locals'):
                self._cross_func_locals = set()
            self._cross_func_locals.add(cname)
            return f'{cname}(); return'
        # Global label -> tail call (jp = call + never return)
        return f'{self.c_name(t)}(); return'

    def emit_cond_jump(self, cond_str, target):
        """Emit a conditional jump."""
        t = target.strip()
        c = self.cond(cond_str)
        if self.is_local_target(t):
            full = f"{self.current_global_label}{t}" if self.current_global_label else t
            return f'if ({c}) goto {self.c_name(full)}'
        # Check if target is a qualified local label reference
        if '.' in t:
            cname = self.c_name(t)
            if not hasattr(self, '_cross_func_locals'):
                self._cross_func_locals = set()
            self._cross_func_locals.add(cname)
            return f'if ({c}) {{ {cname}(); return; }}'
        # Conditional global jump -> conditional tail call
        return f'if ({c}) {{ {self.c_name(t)}(); return; }}'

    def label_goto(self, target):
        """Get a goto target label name."""
        t = target.strip()
        if t.startswith('.') and self.current_global_label:
            return self.c_name(f"{self.current_global_label}{t}")
        return self.c_name(t)

    def label_call(self, target):
        """Get a function call target name."""
        t = target.strip()
        return self.c_name(t)

    def split_operands(self, s):
        """Split operands respecting brackets."""
        if not s:
            return []
        result = []
        depth = 0
        current = ''
        for ch in s:
            if ch == '[':
                depth += 1
            elif ch == ']':
                depth -= 1
            elif ch == ',' and depth == 0:
                result.append(current.strip())
                current = ''
                continue
            current += ch
        if current.strip():
            result.append(current.strip())
        return result

    # ── Macro handling ──

    def expand_macro(self, macro_name, args_str):
        """Translate known LADX macros to C code."""
        mn = macro_name.lower()
        args = [a.strip() for a in args_str.split(',')] if args_str else []

        if mn == 'callsb':
            # callsb Target -> bank switch + call
            if args:
                target = args[0]
                fname = self.c_name(target)
                if target in self.labels:
                    bank = self.labels[target][0]
                    return f'gb_call_bank({bank}, {fname})'
                return f'{fname}() /* callsb */'
            return '/* callsb ? */'

        if mn == 'callhl':
            if args:
                target = args[0]
                fname = self.c_name(target)
                if target in self.labels:
                    bank = self.labels[target][0]
                    return f'gb_call_bank({bank}, {fname})'
                return f'{fname}() /* callhl */'
            return '/* callhl ? */'

        if mn == 'callsw':
            if args:
                target = args[0]
                fname = self.c_name(target)
                if target in self.labels:
                    bank = self.labels[target][0]
                    return f'gb_call_bank({bank}, {fname})'
                return f'{fname}() /* callsw */'
            return '/* callsw ? */'

        if mn == 'jpsb':
            if args:
                target = args[0]
                fname = self.c_name(target)
                if target in self.labels:
                    bank = self.labels[target][0]
                    return f'gb_call_bank({bank}, {fname}); return'
                return f'{fname}(); return /* jpsb */'
            return '/* jpsb ? */'

        if mn == 'jpsw':
            if args:
                return f'{self.c_name(args[0])}(); return /* jpsw */'
            return '/* jpsw ? */'

        if mn == 'jp_table':
            return '/* JP_TABLE - jump table dispatch via rst 0 */'

        if mn == 'far_pointer':
            return f'/* far_pointer {", ".join(args)} */'
        if mn == 'far_pointer_null':
            return '/* far_pointer_null */'

        if mn == 'entity':
            return f'/* entity {", ".join(args)} */'
        if mn == 'entities_end':
            return '/* entities_end */'

        if mn in ('call_open_dialog', 'jp_open_dialog'):
            return f'/* {mn} {", ".join(args)} */'

        if mn in ('ld_dialog_low', 'cp_dialog_low', 'db_dialog_low'):
            return f'/* {mn} {", ".join(args)} */'

        if mn == 'rgb':
            return f'/* rgb {", ".join(args)} */'

        return None  # not a known macro

    # ── File Processing ──

    def resolve_include(self, inc_path, current_file):
        """Resolve an include path relative to the source directory."""
        # Try relative to src/
        full = os.path.join(self.src_dir, inc_path)
        if os.path.exists(full):
            return full

        # Try relative to current file
        cur_dir = os.path.dirname(current_file)
        full = os.path.join(cur_dir, inc_path)
        if os.path.exists(full):
            return full

        # Try relative to disasm root
        full = os.path.join(self.disasm_dir, inc_path)
        if os.path.exists(full):
            return full

        return None

    def read_file_lines(self, filepath):
        """Read lines from a file, handling encoding."""
        try:
            with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
                return f.readlines()
        except Exception as e:
            print(f"  Warning: Cannot read {filepath}: {e}")
            return []

    # ── Pass 1: Collect labels, constants, WRAM/HRAM definitions ──

    def pass1_process_file(self, filepath, visited=None):
        """Recursively process a file for pass 1 (label/constant collection)."""
        if visited is None:
            visited = set()

        norm = os.path.normpath(filepath)
        if norm in visited:
            return
        visited.add(norm)

        lines = self.read_file_lines(filepath)
        # Use instance variables so section state persists across INCLUDE files
        if not hasattr(self, '_p1_inited'):
            self._p1_inited = True
            self._p1_addr = 0
            self._p1_in_wram = False
            self._p1_in_hram = False
            self._p1_in_vram = False
            self._p1_in_rom = False
        in_macro = False

        for raw_line in lines:
            line = raw_line.split(';')[0].strip()
            if not line:
                continue

            # Handle line continuations
            while line.endswith('\\'):
                # This is a multi-line statement, just take first line for pass1
                line = line[:-1].strip()
                break

            # Skip macro definitions
            if re.match(r'^\s*macro\s+', line, re.IGNORECASE):
                in_macro = True
                continue
            if re.match(r'^\s*endm\s*$', line, re.IGNORECASE):
                in_macro = False
                continue
            if in_macro:
                continue

            # INCLUDE directive
            m = re.match(r'^\s*(?:INCLUDE|include)\s+"([^"]+)"', line)
            if m:
                inc_file = self.resolve_include(m.group(1), filepath)
                if inc_file:
                    self.pass1_process_file(inc_file, visited)
                continue

            # SECTION directive
            m = re.match(r'\s*(?:SECTION|section)\s+"[^"]*"', line, re.IGNORECASE)
            if m:
                self._p1_in_wram = False
                self._p1_in_hram = False
                self._p1_in_vram = False
                self._p1_in_rom = False

                # Check type
                if re.search(r'\bvram\b', line, re.IGNORECASE):
                    self._p1_in_vram = True
                    addr_m = re.search(r'\[\s*\$([0-9A-Fa-f]+)\s*\]', line)
                    if addr_m:
                        self._p1_addr = int(addr_m.group(1), 16)
                    else:
                        self._p1_addr = 0x8000
                elif re.search(r'wram', line, re.IGNORECASE):
                    self._p1_in_wram = True
                    addr_m = re.search(r'\[\s*\$([0-9A-Fa-f]+)\s*\]', line)
                    if addr_m:
                        self._p1_addr = int(addr_m.group(1), 16)
                    else:
                        self._p1_addr = 0xC000
                elif re.search(r'hram', line, re.IGNORECASE):
                    self._p1_in_hram = True
                    addr_m = re.search(r'\[\s*\$([0-9A-Fa-f]+)\s*\]', line)
                    if addr_m:
                        self._p1_addr = int(addr_m.group(1), 16)
                    else:
                        self._p1_addr = 0xFF80
                else:
                    self._p1_in_rom = True

                    # Track ROM bank
                    if re.search(r'rom0', line, re.IGNORECASE):
                        self.current_bank = 0
                        self._p1_addr = 0x0000
                    else:
                        bank_m = re.search(r'bank\s*\[\s*\$([0-9A-Fa-f]+)\s*\]', line, re.IGNORECASE)
                        if bank_m:
                            self.current_bank = int(bank_m.group(1), 16)
                        else:
                            bank_m = re.search(r'bank\s*\[\s*(\d+)\s*\]', line, re.IGNORECASE)
                            if bank_m:
                                self.current_bank = int(bank_m.group(1))
                        self._p1_addr = 0x4000  # default for banked ROM

                    addr_m = re.search(r'(?:rom0|romx)\s*\[\s*\$([0-9A-Fa-f]+)\s*\]', line, re.IGNORECASE)
                    if addr_m:
                        self._p1_addr = int(addr_m.group(1), 16)

                continue

            # Constant definitions
            # name EQU value
            m = re.match(r'^(\w+)\s+EQU\s+(.+)', line, re.IGNORECASE)
            if m:
                name = m.group(1)
                val_str = m.group(2).strip()
                num = self.parse_number(val_str)
                if num is not None:
                    self.constants[name] = num
                else:
                    self.constants[name] = val_str
                continue

            # DEF name EQU/= value
            m = re.match(r'^DEF\s+(\w+)\s+(?:EQU|=)\s+(.+)', line, re.IGNORECASE)
            if m:
                name = m.group(1)
                val_str = m.group(2).strip()
                num = self.parse_number(val_str)
                if num is not None:
                    self.constants[name] = num
                else:
                    # EQUS (string defines)
                    if val_str.startswith('"') and val_str.endswith('"'):
                        self.equs_strings[name] = val_str[1:-1]
                    else:
                        self.constants[name] = val_str
                continue

            # DEF name EQUS "string"
            m = re.match(r'^DEF\s+(\w+)\s+EQUS\s+"([^"]*)"', line, re.IGNORECASE)
            if m:
                self.equs_strings[m.group(1)] = m.group(2)
                continue

            # RSRESET / RSSET
            if re.match(r'RSRESET', line, re.IGNORECASE):
                self._rs_counter = 0
                continue
            m = re.match(r'RSSET\s+(.+)', line, re.IGNORECASE)
            if m:
                num = self.parse_number(m.group(1).strip())
                self._rs_counter = num if num is not None else 0
                continue

            # RB / RW / RL
            m = re.match(r'^DEF\s+(\w+)\s+RB\s*(\d*)', line, re.IGNORECASE)
            if not m:
                m = re.match(r'^(\w+)\s+RB\s*(\d*)', line, re.IGNORECASE)
            if m:
                name = m.group(1)
                size = int(m.group(2)) if m.group(2) else 1
                if not hasattr(self, '_rs_counter'):
                    self._rs_counter = 0
                self.constants[name] = self._rs_counter
                self._rs_counter += size
                continue

            m = re.match(r'^DEF\s+(\w+)\s+RW\s*(\d*)', line, re.IGNORECASE)
            if not m:
                m = re.match(r'^(\w+)\s+RW\s*(\d*)', line, re.IGNORECASE)
            if m:
                name = m.group(1)
                size = int(m.group(2)) if m.group(2) else 1
                if not hasattr(self, '_rs_counter'):
                    self._rs_counter = 0
                self.constants[name] = self._rs_counter
                self._rs_counter += size * 2
                continue

            # CHARMAP - skip
            if re.match(r'^\s*(?:CHARMAP|charmap)\s+', line, re.IGNORECASE):
                continue
            if re.match(r'^\s*(?:SETCHARMAP|NEWCHARMAP)\s+', line, re.IGNORECASE):
                continue

            # Global label
            m = re.match(r'^(\w+)::?\s*', line)
            if m:
                name = m.group(1)
                # Skip if it looks like an instruction keyword
                if name.upper() in ('DB', 'DW', 'DL', 'DS', 'INCBIN', 'INCLUDE',
                                      'SECTION', 'IF', 'ELSE', 'ELIF', 'ENDC',
                                      'MACRO', 'ENDM', 'REPT', 'ENDR', 'DEF',
                                      'REDEF', 'EXPORT', 'GLOBAL', 'OPT', 'POPS',
                                      'PUSHS', 'SHIFT', 'RSRESET', 'RSSET',
                                      'SETCHARMAP', 'NEWCHARMAP', 'CHARMAP',
                                      'PURGE', 'WARN', 'FAIL', 'ASSERT',
                                      'PRINTLN', 'PRINTT', 'PRINTV', 'PRINTI',
                                      'PRINTF'):
                    continue

                if self._p1_in_wram:
                    self.wram_addrs[name] = self._p1_addr
                elif self._p1_in_hram:
                    self.hram_addrs[name] = self._p1_addr
                elif self._p1_in_vram:
                    # VRAM labels are memory addresses, store them as constants
                    self.constants[name] = self._p1_addr
                else:
                    self.labels[name] = (self.current_bank, self._p1_addr)
                    self.current_global_label = name
                continue

            # Local label in ROM section - track for cross-function references
            m_local = re.match(r'^(\.[\w]+):?\s*', line)
            if m_local and self.current_global_label and self._p1_in_rom:
                local_name = m_local.group(1)
                full_name = f"{self.current_global_label}{local_name}"
                self.local_labels[full_name] = (self.current_bank, self._p1_addr)

            # ds directive (for address tracking)
            m = re.match(r'\s*ds\s+(.+)', line, re.IGNORECASE)
            if m and (self._p1_in_wram or self._p1_in_hram or self._p1_in_vram or self._p1_in_rom):
                size_str = m.group(1).strip()
                # Handle expressions like 4 * 12
                try:
                    size = eval(size_str.replace('$', '0x'))
                except:
                    num = self.parse_number(size_str)
                    size = num if num is not None else 1
                self._p1_addr += size
                continue

            # db/dw/dl data directives - advance address
            if self._p1_in_rom or self._p1_in_wram or self._p1_in_hram or self._p1_in_vram:
                m_db = re.match(r'\s*db\s+(.+)', line, re.IGNORECASE)
                if m_db:
                    # Count comma-separated values
                    vals = m_db.group(1).split(',')
                    self._p1_addr += len(vals)
                    continue
                m_dw = re.match(r'\s*dw\s+(.+)', line, re.IGNORECASE)
                if m_dw:
                    vals = m_dw.group(1).split(',')
                    self._p1_addr += len(vals) * 2
                    continue
                m_dl = re.match(r'\s*dl\s+(.+)', line, re.IGNORECASE)
                if m_dl:
                    vals = m_dl.group(1).split(',')
                    self._p1_addr += len(vals) * 4
                    continue
                m_incbin = re.match(r'\s*incbin\s+"([^"]+)"', line, re.IGNORECASE)
                if m_incbin:
                    # Try to get file size
                    inc_path = os.path.join(self.disasm_dir, m_incbin.group(1).replace('/', os.sep))
                    if os.path.exists(inc_path):
                        self._p1_addr += os.path.getsize(inc_path)
                    else:
                        self._p1_addr += 16  # rough estimate
                    continue
            # Instructions in ROM - estimate size
            if self._p1_in_rom:
                if re.match(r'\s*(call|jp|ld\s+\w+\s*,\s*\$[0-9a-f]{3,4}|ld\s+(bc|de|hl|sp)\s*,)', line, re.IGNORECASE):
                    self._p1_addr += 3
                elif re.match(r'\s*(jr|add\s+a|sub|and|or|xor|cp|ld\s+[a-hl]\s*,|ld\s+\[hl\]\s*,|cb\s)', line, re.IGNORECASE):
                    self._p1_addr += 2
                elif re.match(r'\s*\w+', line):
                    self._p1_addr += 1  # default 1 byte

    def resolve_constants(self):
        """Resolve dependent constants to numeric values."""
        # Multiple passes to resolve chains
        for _ in range(5):
            changed = False
            for name, val in list(self.constants.items()):
                if isinstance(val, int):
                    continue
                if isinstance(val, str):
                    # Try to evaluate the expression
                    resolved = self.try_eval_const(val)
                    if resolved is not None:
                        self.constants[name] = resolved
                        changed = True
            if not changed:
                break

        # Add known hardware constants that might be missing
        hw_constants = {
            'rROMB0': 0x2000,
            'rROMB1': 0x3000,
            'rSelectROMBank': 0x2100,
            'rP1': 0xFF00, 'rJOYP': 0xFF00,
            'rSB': 0xFF01, 'rSC': 0xFF02,
            'rDIV': 0xFF04, 'rTIMA': 0xFF05, 'rTMA': 0xFF06, 'rTAC': 0xFF07,
            'rIF': 0xFF0F,
            'rNR10': 0xFF10, 'rNR11': 0xFF11, 'rNR12': 0xFF12,
            'rNR13': 0xFF13, 'rNR14': 0xFF14,
            'rNR21': 0xFF16, 'rNR22': 0xFF17, 'rNR23': 0xFF18, 'rNR24': 0xFF19,
            'rNR30': 0xFF1A, 'rNR31': 0xFF1B, 'rNR32': 0xFF1C,
            'rNR33': 0xFF1D, 'rNR34': 0xFF1E,
            'rNR41': 0xFF20, 'rNR42': 0xFF21, 'rNR43': 0xFF22, 'rNR44': 0xFF23,
            'rNR50': 0xFF24, 'rNR51': 0xFF25, 'rNR52': 0xFF26,
            'rLCDC': 0xFF40, 'rSTAT': 0xFF41,
            'rSCY': 0xFF42, 'rSCX': 0xFF43,
            'rLY': 0xFF44, 'rLYC': 0xFF45,
            'rDMA': 0xFF46,
            'rBGP': 0xFF47, 'rOBP0': 0xFF48, 'rOBP1': 0xFF49,
            'rWY': 0xFF4A, 'rWX': 0xFF4B,
            'rKEY1': 0xFF4D, 'rVBK': 0xFF4F,
            'rHDMA1': 0xFF51, 'rHDMA2': 0xFF52,
            'rHDMA3': 0xFF53, 'rHDMA4': 0xFF54, 'rHDMA5': 0xFF55,
            'rRP': 0xFF56, 'rSVBK': 0xFF70,
            'rBCPS': 0xFF68, 'rBCPD': 0xFF69,
            'rOCPS': 0xFF6A, 'rOCPD': 0xFF6B,
            'rIE': 0xFFFF,
            '_VRAM': 0x8000, '_SCRN0': 0x9800, '_SCRN1': 0x9C00,
            '_SRAM': 0xA000, '_RAM': 0xC000, '_OAMRAM': 0xFE00,
            '_HRAM': 0xFF80,
            'vTiles0': 0x8000, 'vTiles1': 0x8800, 'vTiles2': 0x9000,
            'vBGMap0': 0x9800, 'vBGMap1': 0x9C00,
            'TRUE': 1, 'FALSE': 0,
            'BOOTUP_A_CGB': 0x11,
        }
        for name, val in hw_constants.items():
            if name not in self.constants:
                self.constants[name] = val

    def try_eval_const(self, expr):
        """Try to evaluate a constant expression to an integer."""
        if not isinstance(expr, str):
            return None

        expr = expr.strip()

        # Direct number
        num = self.parse_number(expr)
        if num is not None:
            return num

        # Reference to another constant
        if expr in self.constants and isinstance(self.constants[expr], int):
            return self.constants[expr]

        # Try Python eval with known constants
        try:
            # Replace $ with 0x for hex
            py_expr = expr.replace('$', '0x')
            # Replace constant names with their values
            for name, val in self.constants.items():
                if isinstance(val, int) and name in py_expr:
                    py_expr = re.sub(r'\b' + re.escape(name) + r'\b', str(val), py_expr)
            # Evaluate
            result = eval(py_expr, {"__builtins__": {}})
            if isinstance(result, (int, float)):
                return int(result)
        except:
            pass

        return None

    # ── Pass 2: Translate code ──

    def pass2_process_main(self):
        """Process main.asm following includes, translating code per bank."""
        main_asm = os.path.join(self.src_dir, 'main.asm')
        if not os.path.exists(main_asm):
            print(f"  Error: main.asm not found at {main_asm}")
            return

        self.current_bank = 0
        self.current_global_label = None
        self._in_function = False

        self.pass2_process_file(main_asm, set())

        # Close any open function
        if self._in_function and self.current_bank < self.num_banks:
            self.bank_lines[self.current_bank].append('}')

    def pass2_process_file(self, filepath, visited):
        """Process a file for pass 2 (code translation)."""
        norm = os.path.normpath(filepath)
        if norm in visited:
            return
        visited.add(norm)

        lines = self.read_file_lines(filepath)

        i = 0
        while i < len(lines):
            raw_line = lines[i]
            i += 1

            # Handle line continuation
            full_line = raw_line
            while full_line.rstrip().endswith('\\') and i < len(lines):
                full_line = full_line.rstrip()[:-1] + ' ' + lines[i].strip()
                i += 1

            line = full_line.split(';')[0].strip()
            if not line:
                continue

            # Skip IF/ELSE/ENDC blocks related to DX-only features
            if re.match(r'\s*IF\s+', line, re.IGNORECASE):
                # Check if it's a DX/CGB conditional
                if re.search(r'__PATCH_|DEF\(ENABLE_DEBUG|ldh.*hIsGBC', line, re.IGNORECASE):
                    self.if_depth += 1
                    self.skipping = True
                    self.if_skip_depth = self.if_depth
                    continue
                self.if_depth += 1
                continue

            if re.match(r'\s*(?:ELSE|ELIF)', line, re.IGNORECASE):
                if self.skipping and self.if_depth == self.if_skip_depth:
                    self.skipping = False  # Take the ELSE branch instead
                continue

            if re.match(r'\s*ENDC', line, re.IGNORECASE):
                if self.skipping and self.if_depth == self.if_skip_depth:
                    self.skipping = False
                self.if_depth = max(0, self.if_depth - 1)
                continue

            if self.skipping:
                continue

            # Skip certain directives
            if re.match(r'\s*(?:SETCHARMAP|NEWCHARMAP|CHARMAP|PUSHS|POPS|OPT|EXPORT|GLOBAL|PURGE|WARN|FAIL|ASSERT|REDEF|PRINTLN|PRINTT|PRINTV|PRINTI|PRINTF)\s', line, re.IGNORECASE):
                continue

            # Macro definition - skip
            if re.match(r'\s*macro\s+', line, re.IGNORECASE):
                self.in_macro_def = True
                continue
            if re.match(r'\s*endm\s*$', line, re.IGNORECASE):
                self.in_macro_def = False
                continue
            if self.in_macro_def:
                continue

            # Skip REPT/ENDR
            if re.match(r'\s*REPT\s+', line, re.IGNORECASE):
                # Skip until ENDR
                depth = 1
                while i < len(lines) and depth > 0:
                    l = lines[i].split(';')[0].strip()
                    if re.match(r'REPT\s+', l, re.IGNORECASE):
                        depth += 1
                    elif re.match(r'ENDR', l, re.IGNORECASE):
                        depth -= 1
                    i += 1
                continue

            # INCLUDE directive
            m = re.match(r'\s*(?:INCLUDE|include)\s+"([^"]+)"', line)
            if m:
                inc_file = self.resolve_include(m.group(1), filepath)
                if inc_file:
                    self.pass2_process_file(inc_file, visited)
                continue

            # INCBIN - skip (data is in rom_data)
            if re.match(r'\s*(?:INCBIN|incbin)\s+', line, re.IGNORECASE):
                continue

            # SECTION directive
            m = re.match(r'\s*(?:SECTION|section)\s+"[^"]*"', line, re.IGNORECASE)
            if m:
                # Close previous function if open
                if self._in_function and self.current_bank < self.num_banks:
                    self.bank_lines[self.current_bank].append('}')
                    self.bank_lines[self.current_bank].append('')
                    self._in_function = False

                # Detect bank
                if re.search(r'rom0', line, re.IGNORECASE):
                    self.current_bank = 0
                elif re.search(r'wram|hram|sram|vram', line, re.IGNORECASE):
                    self.current_bank = -1  # skip non-ROM sections
                else:
                    bank_m = re.search(r'bank\s*\[\s*\$([0-9A-Fa-f]+)\s*\]', line, re.IGNORECASE)
                    if bank_m:
                        self.current_bank = int(bank_m.group(1), 16)
                    else:
                        bank_m = re.search(r'bank\s*\[\s*(\d+)\s*\]', line, re.IGNORECASE)
                        if bank_m:
                            self.current_bank = int(bank_m.group(1))
                continue

            # Skip if not in a valid bank
            if self.current_bank < 0 or self.current_bank >= self.num_banks:
                continue

            bank = self.current_bank

            # Constant definitions - skip in pass 2
            if re.match(r'^(\w+)\s+EQU\s+', line, re.IGNORECASE):
                continue
            if re.match(r'^DEF\s+', line, re.IGNORECASE):
                continue
            if re.match(r'RSRESET|RSSET', line, re.IGNORECASE):
                continue
            if re.match(r'^(\w+)\s+R[BWL]\s*', line, re.IGNORECASE):
                continue

            # Global label (with or without trailing instruction)
            m = re.match(r'^(\w+)(::?)\s*(.*)', line)
            if m:
                name = m.group(1)
                if name.upper() in ('DB', 'DW', 'DL', 'DS', 'INCBIN', 'INCLUDE',
                                      'SECTION', 'IF', 'ELSE', 'ELIF', 'ENDC',
                                      'MACRO', 'ENDM', 'REPT', 'ENDR', 'DEF',
                                      'REDEF', 'EXPORT', 'GLOBAL', 'OPT',
                                      'SETCHARMAP', 'NEWCHARMAP', 'CHARMAP'):
                    # It's a data directive, not a label
                    rest = m.group(3).strip() if m.group(3) else ''
                    self.emit_data_line(bank, name, rest)
                    continue

                rest = m.group(3).strip()
                fname = self.c_name(name)

                # Close previous function
                if self._in_function:
                    self.bank_lines[bank].append('}')
                    self.bank_lines[bank].append('')

                self.current_global_label = name

                # Prevent duplicate function definitions
                if not hasattr(self, '_defined_functions'):
                    self._defined_functions = set()
                if fname in self._defined_functions:
                    fname = f'{fname}__dup{bank:02X}'
                self._defined_functions.add(fname)

                self.all_functions.add(fname)
                self.bank_functions[bank].append(fname)

                self.bank_lines[bank].append(f'void {fname}(void) {{')
                self._in_function = True

                # Handle instruction on same line
                if rest:
                    self.process_instruction_line(bank, rest)
                continue

            # Local label
            m = re.match(r'^(\.[\w]+):?\s*(.*)', line)
            if m:
                local_name = m.group(1)
                rest = m.group(2).strip()
                full = f"{self.current_global_label}{local_name}" if self.current_global_label else local_name
                label_c = self.c_name(full)

                if self._in_function:
                    self.bank_lines[bank].append(f'  {label_c}:;')
                    if rest:
                        self.process_instruction_line(bank, rest)
                continue

            # Regular instruction or macro or data
            self.process_instruction_line(bank, line)

    def process_instruction_line(self, bank, line):
        """Process a single instruction/macro/data line."""
        if not line or not self._in_function:
            return

        if bank < 0 or bank >= self.num_banks:
            return

        parts = line.split(None, 1)
        if not parts:
            return

        opcode = parts[0]
        operands = parts[1].split(';')[0].strip() if len(parts) > 1 else ''

        opup = opcode.upper()

        # Data directives in code
        if opup in ('DB', 'DW', 'DL', 'DS'):
            self.bank_lines[bank].append(f'    /* data: {opcode} {operands} */;')
            return

        # Known macros
        macro_result = self.expand_macro(opcode, operands)
        if macro_result is not None:
            self.bank_lines[bank].append(f'    {macro_result};')
            return

        # SM83 instruction
        c_code = self.translate_instr(opcode, operands)
        self.bank_lines[bank].append(f'    {c_code};')

    def emit_data_line(self, bank, directive, operands):
        """Emit a data directive as a C comment."""
        if bank < 0 or bank >= self.num_banks:
            return
        if self._in_function:
            self.bank_lines[bank].append(f'    /* data: {directive} {operands} */;')

    # ── Output generation ──

    def generate_bank_file(self, bank):
        """Generate C source for a bank."""
        lines = []
        lines.append(f'/* Auto-generated from LADX Disassembly - Bank 0x{bank:02X} */')
        lines.append('#include "gb_runtime.h"')
        lines.append('#include "gb_cpu.h"')
        lines.append('#include "rom_data.h"')
        lines.append('#include "game_labels.h"')
        lines.append('')

        # Forward declarations for functions in this bank
        funcs = self.bank_functions.get(bank, [])
        if funcs:
            for fn in funcs:
                lines.append(f'void {fn}(void);')
            lines.append('')

        # Code
        lines.extend(self.bank_lines[bank])

        return '\n'.join(lines)

    def generate_labels_header(self):
        """Generate game_labels.h."""
        lines = []
        lines.append('#ifndef GAME_LABELS_H')
        lines.append('#define GAME_LABELS_H')
        lines.append('')
        lines.append('#include "gb_runtime.h"')
        lines.append('#include "gb_cpu.h"')
        lines.append('')

        # Constants
        lines.append('/* Constants */')
        for name in sorted(self.constants.keys()):
            val = self.constants[name]
            cn = self.c_name(name)
            if isinstance(val, int):
                if val > 255:
                    lines.append(f'#define {cn} {self.fmt_hex(val, 4)}')
                else:
                    lines.append(f'#define {cn} {self.fmt_hex(val)}')
            # Skip string constants - they're RGBDS-specific
        lines.append('')

        # WRAM addresses
        if self.wram_addrs:
            lines.append('/* WRAM addresses */')
            for name in sorted(self.wram_addrs.keys()):
                cn = self.c_name(name)
                lines.append(f'#define {cn} {self.fmt_hex(self.wram_addrs[name], 4)}')
            lines.append('')

        # HRAM addresses
        if self.hram_addrs:
            lines.append('/* HRAM addresses */')
            for name in sorted(self.hram_addrs.keys()):
                cn = self.c_name(name)
                lines.append(f'#define {cn} {self.fmt_hex(self.hram_addrs[name], 4)}')
            lines.append('')

        # Function declarations
        lines.append('/* Function declarations */')
        for fn in sorted(self.all_functions):
            lines.append(f'void {fn}(void);')
        lines.append('')

        # Cross-function local label stubs
        cross_locals = getattr(self, '_cross_func_locals', set())
        if cross_locals:
            lines.append('/* Cross-function local label stubs */')
            for fn in sorted(cross_locals):
                if fn not in self.all_functions:
                    lines.append(f'void {fn}(void);')
            lines.append('')

        # Include fixups LAST so it can #undef and override any earlier defines
        lines.append('/* Fixups must come last to override defines like hDMARoutine */')
        lines.append('#include "fixups.h"')
        lines.append('')

        lines.append('#endif /* GAME_LABELS_H */')
        return '\n'.join(lines)

    def generate_wram_header(self):
        """Generate wram_defs.h."""
        lines = []
        lines.append('#ifndef WRAM_DEFS_H')
        lines.append('#define WRAM_DEFS_H')
        lines.append('')
        lines.append('#include <stdint.h>')
        lines.append('')

        lines.append('/* WRAM addresses */')
        for name, addr in sorted(self.wram_addrs.items(), key=lambda x: x[1]):
            cn = self.c_name(name)
            lines.append(f'#define WRAM_{cn} {self.fmt_hex(addr, 4)}')
        lines.append('')

        lines.append('/* HRAM addresses */')
        for name, addr in sorted(self.hram_addrs.items(), key=lambda x: x[1]):
            cn = self.c_name(name)
            lines.append(f'#define HRAM_{cn} {self.fmt_hex(addr, 4)}')
        lines.append('')

        lines.append('#endif /* WRAM_DEFS_H */')
        return '\n'.join(lines)

    # ── Main entry point ──

    def run(self):
        print("=== LADX Assembly to C Transpiler ===")
        print(f"Disassembly: {self.disasm_dir}")
        print(f"Output:      {self.output_dir}")
        print(f"Banks:       {self.num_banks}")
        print()

        os.makedirs(self.output_dir, exist_ok=True)

        # Pass 1: collect labels and constants
        print("Pass 1: Collecting labels, constants, WRAM/HRAM...")
        main_asm = os.path.join(self.src_dir, 'main.asm')
        if os.path.exists(main_asm):
            self.pass1_process_file(main_asm)
        else:
            print(f"  Warning: {main_asm} not found, scanning all .asm files")
            import glob as g
            for f in g.glob(os.path.join(self.src_dir, '**/*.asm'), recursive=True):
                self.pass1_process_file(f)

        # Resolve dependent constants
        self.resolve_constants()

        print(f"  Labels: {len(self.labels)}")
        print(f"  Constants: {len(self.constants)}")
        print(f"  WRAM vars: {len(self.wram_addrs)}")
        print(f"  HRAM vars: {len(self.hram_addrs)}")

        # Pass 2: translate code
        print("\nPass 2: Translating assembly to C...")
        self.pass2_process_main()

        # Write bank files
        print("\nWriting output files...")
        for bank in range(self.num_banks):
            code = self.bank_lines[bank]
            funcs = self.bank_functions[bank]

            filepath = os.path.join(self.output_dir, f'bank_{bank:02X}.c')

            if code or funcs:
                content = self.generate_bank_file(bank)
                with open(filepath, 'w') as f:
                    f.write(content)
                print(f"  bank_{bank:02X}.c: {len(funcs)} functions, {len(code)} lines")
            else:
                # Stub bank
                stub = []
                stub.append(f'/* Bank 0x{bank:02X} - data only (no code) */')
                stub.append('#include "gb_runtime.h"')
                stub.append('#include "gb_cpu.h"')
                stub.append('#include "rom_data.h"')
                stub.append('#include "game_labels.h"')
                stub.append('')
                with open(filepath, 'w') as f:
                    f.write('\n'.join(stub))
                print(f"  bank_{bank:02X}.c: stub (data-only bank)")

        # Generate cross-function local label stub bodies
        cross_locals = getattr(self, '_cross_func_locals', set())
        undefined_locals = [fn for fn in sorted(cross_locals) if fn not in self.all_functions]
        if undefined_locals:
            stubs_path = os.path.join(self.output_dir, 'cross_func_stubs.c')
            with open(stubs_path, 'w') as f:
                f.write('/* Auto-generated stub functions for cross-function local label references */\n')
                f.write('#include "gb_runtime.h"\n')
                f.write('#include "gb_cpu.h"\n')
                f.write('#include "rom_data.h"\n')
                f.write('#include "game_labels.h"\n\n')
                for fn in undefined_locals:
                    f.write(f'void {fn}(void) {{ /* cross-function local label stub */ }}\n')
            print(f"  cross_func_stubs.c: {len(undefined_locals)} stub functions")
            self.all_functions.update(undefined_locals)

        # Ensure bank_00_entry exists
        if 'bank_00_entry' not in self.all_functions:
            # Find the first function in bank 0 to use as entry
            b0_funcs = self.bank_functions.get(0, [])
            entry_func = b0_funcs[0] if b0_funcs else 'Start'
            entry_name = self.c_name(entry_func) if entry_func != b0_funcs[0] else entry_func

            # Add entry wrapper to bank 0
            b0_path = os.path.join(self.output_dir, 'bank_00.c')
            with open(b0_path, 'a') as f:
                f.write(f'\n/* Entry point wrapper */\n')
                f.write(f'void bank_00_entry(void) {{\n')
                f.write(f'    RenderLoop();\n')
                f.write(f'}}\n')
            self.all_functions.add('bank_00_entry')

        # Write header files
        labels_h = self.generate_labels_header()
        with open(os.path.join(self.output_dir, 'game_labels.h'), 'w') as f:
            f.write(labels_h)
        print(f"  game_labels.h: {len(self.all_functions)} function declarations")

        wram_h = self.generate_wram_header()
        with open(os.path.join(self.output_dir, 'wram_defs.h'), 'w') as f:
            f.write(wram_h)
        print(f"  wram_defs.h: {len(self.wram_addrs) + len(self.hram_addrs)} definitions")

        print("\nTranspilation complete!")
        print(f"Total functions: {len(self.all_functions)}")
        banks_with_code = sum(1 for b in range(self.num_banks) if self.bank_functions[b])
        print(f"Banks with code: {banks_with_code}/{self.num_banks}")


def main():
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <disasm_dir> [output_dir] [--rom-banks N]")
        sys.exit(1)

    disasm_dir = sys.argv[1]
    output_dir = 'game'

    if len(sys.argv) > 2 and not sys.argv[2].startswith('--'):
        output_dir = sys.argv[2]

    num_banks = NUM_BANKS_DEFAULT
    if '--rom-banks' in sys.argv:
        idx = sys.argv.index('--rom-banks')
        if idx + 1 < len(sys.argv):
            num_banks = int(sys.argv[idx + 1])

    if not os.path.exists(disasm_dir):
        print(f"Error: Directory not found: {disasm_dir}")
        sys.exit(1)

    t = Transpiler(disasm_dir, output_dir, num_banks)
    t.run()


if __name__ == '__main__':
    main()
