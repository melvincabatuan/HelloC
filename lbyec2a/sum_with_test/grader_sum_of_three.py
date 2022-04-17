######################################################
#   DO NOT MODIFY THIS TEST FILE                     #
#   This serves as tester to run exe file            #
#   Make sure to compile C code before running this  #
#   Written by: MKC                                  #
#   Last Modified: April 17, 2022                    #
######################################################

import os
import pathlib
import subprocess
import psutil
import traceback
import random
import datetime
import time

score = 0


def test_one(process, input, expected):
    global score
    out, err = process.communicate(input)
    out = out.decode("utf-8")
    if out:
        print("SUCCESS: Output was produced:")
        print(out)
    else:
        print("ERROR: There was no output!")
    if err:
        print(err)

    print("\nTest 1. RUN SUCCESS TEST: ")
    if(process.returncode == 0):
        score = 50
        print(
            f"The source code run successfully! =======================> {score}%")
    else:
        print(
            f"There was an error in the code run.=======================> {score}%")
        exit(-1)

    print("\nTest 2. OUTPUT CORRECTNESS TEST: ")
    actual = out.splitlines()[-1]  # get the last line of the output
    print("ACTUAL =", actual)
    print(f"EXPECTED = {expected} will be printed on the last line.")
    if (expected in actual):
        score = 100
        print(
            f"\nSUCCESSFULLY printed the correct output: {expected} =======================> {score}%")
    else:
        print(f"\n{expected} was not printed!=======================> {score}%\n")


def test():
    exe_file = ''
    print("\nA. Listing current working directory (Should have exactly one .exe file!):")
    current_dir = pathlib.Path('.')
    for current_file in current_dir.iterdir():
        print('\t', current_file)
        name, extension = os.path.splitext(current_file)
        if extension == '.exe' or extension == '.out':
            exe_file = name
    print()
    print("B. Executable to be tested:", exe_file)
    print()

    print("C. Test run:")
    try:
        process = subprocess.Popen(
            "./" + exe_file,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
        )
        num1, num2, num3 = random.sample(range(-1000, 1000), 3)
        input_string = f"{num1} {num2} {num3}"
        print("input_string =", input_string)
        test_one(process, input_string.encode(
            'utf-8'), str(sum([num1, num2, num3])))

    except FileNotFoundError:
        print("ERROR: Make sure to compile your C program first to produce the executable file!")
    except:
        print("ERROR:")
        traceback.print_exc()


if __name__ == '__main__':
    test()
    print("\nD. SCORE :", f"{score}%")
    print("TEST FILE:", os.path.basename(__file__))
    print("WHOAMI   :", psutil.Process().username().split(os.sep)[-1])
    print("TEST DATE:", datetime.datetime.now().strftime("%d/%m/%Y %H:%M:%S"))
    print("REFERENCE:", datetime.datetime.fromtimestamp(
        os.path.getmtime(__file__)).strftime("%d/%m/%Y %H:%M:%S"))
    print()
