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


def test_one(process, input, expected):
    run_success = False
    run_correct = False
    out, err = process.communicate(input)
    out = out.decode("utf-8")
    if out:
        print("Output was produced:")
        print(out)
    else:
        print("There was no output! Note: Print the result in the last line!")
    if err:
        print(err)

    print("\nTest 1. RUN SUCCESS TEST: ")
    if(process.returncode == 0):
        run_success = True
        print(
            f"The source code run successfully!\n")
    else:
        run_success = False
        print(
            f"There was an error in the code run.\n")
        return (run_success, run_correct)

    print("\nTest 2. OUTPUT CORRECTNESS TEST: ")
    actual = out.splitlines()[-1]  # get the last line of the output
    print("ACTUAL =", actual)
    print(f"EXPECTED = {expected} will be printed on the last line.")
    if (expected in actual.upper()):
        run_correct = True
        print(
            f"\nSUCCESSFULLY printed the correct output: {expected}")
    else:
        run_correct = False
        print(f"\n{expected} was not printed!n")
    return (run_success, run_correct)


def test():
    success = False
    correct = False
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
        NUM_TESTS = 4
        for _ in range(NUM_TESTS):
            process = subprocess.Popen(
                "./" + exe_file,
                stdin=subprocess.PIPE,
                stdout=subprocess.PIPE,
            )
            num1, num2, num3, num4 = random.sample(range(0, 100), 4)
            input_string = f"{num1} {num2} {num3} {num4}"
            expected = "FAIL" if ((sum(
                [num1, num2, num3, num4])/4.0) < 70.0) else "PASS"
            print("input_string =", input_string)
            success, correct = test_one(process, input_string.encode(
                'utf-8'), expected)

            process.terminate()

            if not success or not correct:
                break

    except FileNotFoundError:
        print("ERROR: Make sure to compile your C program first to produce the executable file!")
    except:
        print("ERROR:")
        traceback.print_exc()

    return (50*int(success == True) + 50*int(correct == True))


if __name__ == '__main__':
    score = test()
    print("\nD. SCORE :", f"{score}%")
    print("TEST FILE:", os.path.basename(__file__))
    print("WHOAMI   :", psutil.Process().username().split(os.sep)[-1])
    print("TEST DATE:", datetime.datetime.now().strftime("%d/%m/%Y %H:%M:%S"))
    print("REFERENCE:", datetime.datetime.fromtimestamp(
        os.path.getmtime(__file__)).strftime("%d/%m/%Y %H:%M:%S"))
    print()
