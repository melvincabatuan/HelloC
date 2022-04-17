#########################################
#   DO NOT MODIFY THIS TEST FILE        #
#   Written by: MKC                     #
#   Last Modified: April 17, 2022       #
#########################################

import os
import subprocess
import pathlib
import traceback

exe_file = ''

print("\n1. Listing current working directory:")
current_dir = pathlib.Path('.')
for current_file in current_dir.iterdir():
    print('\t', current_file)
    name, extension = os.path.splitext(current_file)
    if extension == '.exe' or extension == '.out':
        exe_file = name
print()
print("2. Executable found:", exe_file)
print()

print("3. Testing comparison/s:")
try:
    actual = subprocess.check_output("./" + exe_file).decode("utf-8")
    print("\tACTUAL OUTPUT    : ", actual)
    EXPECTED = "Hello, World!"
    print("\tEXPECTED OUTPUT  : ", EXPECTED)

    print("\n4. Remarks:")
    if (actual == EXPECTED):
        print(f"\n\tSUCCESSFULLY printed: {EXPECTED}\n")
    else:
        print(f"\n\t{EXPECTED} was not printed!\n")
except FileNotFoundError:
    print("ERROR: Make sure to compile your C program first to produce the executable file!")
except:
    # handle all other exceptions
    traceback.print_exc()
