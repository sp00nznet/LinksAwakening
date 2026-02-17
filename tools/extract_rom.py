#!/usr/bin/env python3
"""
ROM Data Extraction Tool for Link's Awakening Static Recompilation.

Supports both DMG (512KB, 32 banks) and DX/GBC (1MB, 64 banks) ROMs.
When both are provided:
  - Banks 0x00-0x1F come from DMG ROM (matches transpiled code)
  - Banks 0x20-0x3F come from DX ROM (GBC-specific data)
When only DMG is provided:
  - Banks 0x00-0x1F from DMG, 0x20-0x3F filled with 0xFF
When only DX is provided:
  - All 64 banks from DX ROM
"""

import sys
import os

BANK_SIZE = 0x4000  # 16KB
MAX_BANKS = 64      # DX has 64 banks


def detect_rom_type(rom_data):
    """Detect ROM type from header byte at 0x143 (CGB flag)."""
    if len(rom_data) < 0x150:
        return 'unknown', 0
    cgb_flag = rom_data[0x143]
    if cgb_flag == 0x80 or cgb_flag == 0xC0:
        return 'dx', len(rom_data) // BANK_SIZE
    else:
        return 'dmg', len(rom_data) // BANK_SIZE


def extract_rom(rom_paths, output_dir):
    """Extract ROM(s) into C arrays."""
    roms = {}
    for path in rom_paths:
        with open(path, 'rb') as f:
            data = f.read()
        rom_type, num_banks = detect_rom_type(data)
        title = data[0x134:0x143].decode('ascii', errors='replace').rstrip('\x00')
        print(f"  {os.path.basename(path)}: {rom_type.upper()}, {len(data)//1024}KB, "
              f"{num_banks} banks, \"{title}\"")
        roms[rom_type] = data

    # Build combined 64-bank ROM data
    num_banks = MAX_BANKS
    combined = bytearray(num_banks * BANK_SIZE)

    if 'dmg' in roms and 'dx' in roms:
        # Best case: DMG data for banks 0-31 (matches transpiled code),
        # DX data for banks 32-63 (GBC-specific assets)
        dmg = roms['dmg']
        dx = roms['dx']
        combined[0:32*BANK_SIZE] = dmg[:32*BANK_SIZE]
        combined[32*BANK_SIZE:64*BANK_SIZE] = dx[32*BANK_SIZE:64*BANK_SIZE]
        is_gbc = True
        print(f"\nCombined: DMG banks 0x00-0x1F + DX banks 0x20-0x3F (GBC mode)")
    elif 'dx' in roms:
        # DX only - use all 64 banks from DX
        dx = roms['dx']
        combined[:len(dx)] = dx[:64*BANK_SIZE]
        is_gbc = True
        print(f"\nUsing DX ROM for all {num_banks} banks (GBC mode)")
    elif 'dmg' in roms:
        # DMG only - 32 banks, pad rest with 0xFF
        dmg = roms['dmg']
        combined[0:32*BANK_SIZE] = dmg[:32*BANK_SIZE]
        combined[32*BANK_SIZE:] = b'\xFF' * (32 * BANK_SIZE)
        is_gbc = False
        print(f"\nUsing DMG ROM, banks 0x20-0x3F empty (DMG mode)")
    else:
        print("Error: No valid ROM found")
        sys.exit(1)

    # Write rom_data.c
    c_path = os.path.join(output_dir, 'rom_data.c')
    h_path = os.path.join(output_dir, 'rom_data.h')

    print(f"\nWriting {c_path}...")
    with open(c_path, 'w') as f:
        f.write('/* Auto-generated ROM data - do not edit */\n')
        f.write(f'/* ROM type: {"DX (GBC)" if is_gbc else "DMG"} */\n')
        f.write('#include "rom_data.h"\n\n')
        f.write(f'const int rom_is_gbc = {1 if is_gbc else 0};\n\n')

        for bank in range(num_banks):
            offset = bank * BANK_SIZE
            bank_data = combined[offset:offset + BANK_SIZE]

            f.write(f'const uint8_t rom_bank_{bank:02X}[{BANK_SIZE}] = {{\n')
            for i in range(0, BANK_SIZE, 16):
                chunk = bank_data[i:i + 16]
                hex_vals = ', '.join(f'0x{b:02X}' for b in chunk)
                f.write(f'    {hex_vals},\n')
            f.write('};\n\n')

        # Bank pointer array
        f.write(f'const uint8_t *rom_bank_ptrs[{num_banks}] = {{\n')
        for bank in range(num_banks):
            f.write(f'    rom_bank_{bank:02X},\n')
        f.write('};\n')

    print(f"Writing {h_path}...")
    with open(h_path, 'w') as f:
        f.write('#ifndef ROM_DATA_H\n')
        f.write('#define ROM_DATA_H\n\n')
        f.write('#include <stdint.h>\n\n')
        f.write(f'#define NUM_ROM_DATA_BANKS {num_banks}\n\n')
        f.write(f'extern const int rom_is_gbc;\n\n')

        for bank in range(num_banks):
            f.write(f'extern const uint8_t rom_bank_{bank:02X}[{BANK_SIZE}];\n')

        f.write(f'\nextern const uint8_t *rom_bank_ptrs[{num_banks}];\n')
        f.write('\n#endif /* ROM_DATA_H */\n')

    print(f"Extracted {num_banks} banks ({len(combined)} bytes)")
    return is_gbc


def verify_rom(rom_path):
    """Print ROM information."""
    with open(rom_path, 'rb') as f:
        original = f.read()

    title = original[0x134:0x143].decode('ascii', errors='replace').rstrip('\x00')
    cgb_flag = original[0x143]
    print(f"  Title: {title}")
    print(f"  CGB flag: 0x{cgb_flag:02X} ({'GBC' if cgb_flag in (0x80, 0xC0) else 'DMG'})")
    print(f"  Cart type: 0x{original[0x147]:02X}")
    print(f"  ROM size: 0x{original[0x148]:02X} ({len(original) // 1024}KB)")
    print(f"  RAM size: 0x{original[0x149]:02X}")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <rom_file> [rom_file2] [output_dir]")
        print(f"  rom_file: Path to .gb or .gbc ROM file(s)")
        print(f"  output_dir: Output directory (default: game/)")
        print(f"\nExamples:")
        print(f"  {sys.argv[0]} game.gb                    # DMG only")
        print(f"  {sys.argv[0]} game.gbc                   # DX only")
        print(f"  {sys.argv[0]} game.gb game.gbc           # Both (recommended)")
        sys.exit(1)

    rom_files = []
    output_directory = 'game'
    for arg in sys.argv[1:]:
        if arg.lower().endswith(('.gb', '.gbc')):
            rom_files.append(arg)
        else:
            output_directory = arg

    if not rom_files:
        print("Error: No ROM files specified")
        sys.exit(1)

    for rf in rom_files:
        if not os.path.exists(rf):
            print(f"Error: ROM file not found: {rf}")
            sys.exit(1)

    os.makedirs(output_directory, exist_ok=True)

    print("ROM files:")
    extract_rom(rom_files, output_directory)

    print("\nROM details:")
    for rf in rom_files:
        print(f"\n  {os.path.basename(rf)}:")
        verify_rom(rf)
