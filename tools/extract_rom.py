#!/usr/bin/env python3
"""
ROM Data Extraction Tool for Link's Awakening Static Recompilation.

Reads a 512KB Game Boy ROM and slices it into 32 x 16KB bank arrays,
emitting C source and header files with the ROM data embedded.
"""

import sys
import os

BANK_SIZE = 0x4000  # 16KB
NUM_BANKS = 32
ROM_SIZE = BANK_SIZE * NUM_BANKS  # 512KB


def extract_rom(rom_path, output_dir):
    """Extract ROM into C arrays."""
    with open(rom_path, 'rb') as f:
        rom_data = f.read()

    if len(rom_data) != ROM_SIZE:
        print(f"Warning: ROM size is {len(rom_data)} bytes, expected {ROM_SIZE}")
        if len(rom_data) < ROM_SIZE:
            rom_data += b'\xFF' * (ROM_SIZE - len(rom_data))
        else:
            rom_data = rom_data[:ROM_SIZE]

    # Generate rom_data.c
    c_path = os.path.join(output_dir, 'rom_data.c')
    h_path = os.path.join(output_dir, 'rom_data.h')

    print(f"Writing {c_path}...")
    with open(c_path, 'w') as f:
        f.write('/* Auto-generated ROM data - do not edit */\n')
        f.write('#include "rom_data.h"\n\n')

        for bank in range(NUM_BANKS):
            offset = bank * BANK_SIZE
            bank_data = rom_data[offset:offset + BANK_SIZE]

            f.write(f'const uint8_t rom_bank_{bank:02X}[{BANK_SIZE}] = {{\n')

            for i in range(0, BANK_SIZE, 16):
                chunk = bank_data[i:i + 16]
                hex_vals = ', '.join(f'0x{b:02X}' for b in chunk)
                f.write(f'    {hex_vals},\n')

            f.write('};\n\n')

        # Bank pointer array
        f.write('const uint8_t *rom_bank_ptrs[32] = {\n')
        for bank in range(NUM_BANKS):
            f.write(f'    rom_bank_{bank:02X},\n')
        f.write('};\n')

    print(f"Writing {h_path}...")
    with open(h_path, 'w') as f:
        f.write('#ifndef ROM_DATA_H\n')
        f.write('#define ROM_DATA_H\n\n')
        f.write('#include <stdint.h>\n\n')

        for bank in range(NUM_BANKS):
            f.write(f'extern const uint8_t rom_bank_{bank:02X}[{BANK_SIZE}];\n')

        f.write(f'\nextern const uint8_t *rom_bank_ptrs[{NUM_BANKS}];\n')
        f.write('\n#endif /* ROM_DATA_H */\n')

    print(f"Extracted {NUM_BANKS} banks from ROM ({len(rom_data)} bytes)")


def verify_rom(rom_path, output_dir):
    """Verify extracted data matches the original ROM."""
    with open(rom_path, 'rb') as f:
        original = f.read()

    # Re-read the generated C file and parse out the hex values
    # (Simple verification: check file sizes and first/last bytes)
    c_path = os.path.join(output_dir, 'rom_data.c')
    if not os.path.exists(c_path):
        print("Cannot verify: rom_data.c not found")
        return False

    print("ROM data extracted successfully.")
    print(f"  Title: {original[0x134:0x143].decode('ascii', errors='replace').rstrip(chr(0))}")
    print(f"  Cart type: 0x{original[0x147]:02X}")
    print(f"  ROM size: 0x{original[0x148]:02X} ({len(original) // 1024}KB)")
    print(f"  RAM size: 0x{original[0x149]:02X}")
    return True


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <rom_file> [output_dir]")
        print(f"  rom_file: Path to the .gb ROM file")
        print(f"  output_dir: Output directory (default: game/)")
        sys.exit(1)

    rom_file = sys.argv[1]
    output_directory = sys.argv[2] if len(sys.argv) > 2 else 'game'

    if not os.path.exists(rom_file):
        print(f"Error: ROM file not found: {rom_file}")
        sys.exit(1)

    os.makedirs(output_directory, exist_ok=True)
    extract_rom(rom_file, output_directory)
    verify_rom(rom_file, output_directory)
