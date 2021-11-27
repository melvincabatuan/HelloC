# Basic C/Cpp Coding 

This is a collection of Simple C/C++ programs for the purpose of basic programming introduction.
                                                                                         -mkc

$ gcc filename.c -o filename

 OR

$ g++ filename.cpp -o filename

## Q-and-A's

### General
| Q  | A |
| ------------- | ------------- |
| fatal error: conio.h: No such file or directory | Do not use conio since this is associated with the old MS-DOS Windows system, thus not portable.|
| Can we create new header files? | No. This is unnecessary and will mess up the build. |
| Can I add main in my implementation file? | No. There can only be one main() function and it has been provided in a separate file. If you're using your own main() function in the implementation, make sure to **comment** it out when submitting the final solution since this will interfer with the build. |


### Lab 1

| Q  | A |
| ------------- | ------------- |
| There seems to be an error with the tests in github because the test would expect an odd number even though the test was for even numbers and vice versa. Is there a problem with the code or with the test sir?  | Please read the assignment carefully - we are expecting the ODD INDEXED elements (1,3,5,7, ... and so on), regardless whether they are odd numbers or not. On the other hand,  we are expecting the EVEN INDEXED elements (0, 2, 4, ...) as well.  |
| I run my codes in DevC and it was working correctly as the output of the activity wanted. But when I placed it in github it was marked wrong, That's why I edited my codes in github and got a chech mark. However, when I placed the changes in my DevC it shows an additional output. Ex.: input: 10 45 15 26 35 25 7 12 8 3; picked the rotate forward with offset 2, its output shown in my computer are 8 3 10 45 15 26 35 25 7 12 8 3 po. Attach is a short video of the codes giving the expected output but marked wrong in github. | This has been addressed - 100% tests passed now, 0 tests failed out of 10. The issue was do NOT include the main function in the implementation, e.g. comment out the main function in lab1/ex2/ex2.cpp |
| I forgot to bring it up in class a while ago but I usually encounter the Error ID returned 1 exit status whenever testing the code (that I downloaded from github) in my laptop. Sometimes, it gets resolved by just restarting my laptop but sometimes it stays there for longer. How do I resolve this issue? | I usually encounter " Error ID returned 1 exit status" when I do not close the previous run in DevC, next time you encounter this, try to check if a previous run window / cmd is still open. |
| What does SEGFAULT mean? | Segmentation Fault Error occurs when your trying to ACCESS a certain part of the **memory** not allocated to your program, e.g. array[10], then array[12] = 20, even with array[10] = 99 |


### Lab 2

| Q  | A |
| ------------- | ------------- |
| May follow up question lang po for Lab 2 as well. In the test po kasi sa github ito po yung lumabas na error. But the error it’s saying is from a code po that we are not supposed to touch. What do I do po?  | Hi xxxx, Good day! I already checked your output. The problem in the testing was that the  file was not written. I modified the path, then it worked. Good job!  |
|If I want to see the original lab2_ex1.cpp code (with the //ENTER CODE HERE!!//) what do I press po? Na-copy paste ko na po kasi yung gawa ko and its still wrong, but I wanted to backtrack on what happened.| You can revert to the previous commit. Instructions here: https://docs.github.com/en/desktop/contributing-and-collaborating-using-github-desktop/managing-commits/reverting-a-commit |
|my lab act 2 ex 2 I think is already good since it did not show up in the error. however, my ex1 seems to not be going well. as far as the code is concerned, I'm 80% sure that its good to go since testing it on dev c++ yields the correct pattern as well as output into a txt file. I'm having a hard time diagnosing the problem through reading the test logs so I wanted to ask for help and advice.| Hi xxxx, Good day! Your output doesn't satisfy the expected output yet: your output <br>input: de la salle <br>ede la sall <br>lede la sal <br>llede la sa <br> allede la s <br>sallede la <br>sallede la <br>a sallede l <br>la sallede <br>la sallede <br>e la salled <br>Expected:  <br>de la salle  <br>ede la sall  <br>lede la sal  <br>llede la sa  <br>allede la s  <br>sallede la  <br>sallede la  <br>a sallede l  <br>la sallede  <br>la sallede  <br>e la salled  <br>| 
| Can we replace fgets with scanf("%[^\n]s",&input); in the ex1_main?  | NO! Using scanf for %s is not a good practice, thus don't do this. |
| The output looks weird with fgets() | fgets() includes your <ENTER> key input or '\n' character at the end of the string, thus, you must replace this with '\0'. E.g. input[strlen(input)-1] = '\0'; |
| I just finished my codes for module 2 and they seem to be working fine, however, github still marks it as wrong. I would like to ask for help lang po about this if you have the time. Thank you sir. | The build details states undefined reference to `alpanumeric_count(char const*)'. Thus, checking your, lab2/ex2/lab2_ex2.cpp it seems that you renamed the function into int alpha_count(), this is not allowed. |
|  I just wanted to clarify because I noticed that in the example in the repository, the number of letters was 639 which I think because it included the 2 numbers (100 and 100). So should we include the numbers in this count po even it just says letters? | Yes, please include the digits as well. |
|Build Error:  if (input[i] == NULL) {... | Note that the null character is '\0' not NULL which we usually use for pointers  |
| undefined reference to `box_shift(char*, char const*)' | This happens when you change the function prototype, thus maintain the starter code with regards to the heading of the function, e.g. void box_shift(char *input, const char *filename) |
| error: no match for ‘operator>=’ (operand types are ‘FILE’ {aka ‘_IO_FILE’} and ‘char’) 26      if ((stdin[i] >= 'a' .... | You cannot use stdin here, use the variable text instead. |

### Lab 3

| Q | A|
| ------------- | ------------- |
|  Sir, if I may ask, is it possible that you check the github checker for Lab 3 Machine Problem? My code works in DEV-C, but fails to do so in Github for some reason. It always results in a very weird sum. It also says that 3 out of 4 checks are correct—and that only the sum part is messing up. E.g. 71 95 69 69 66 3 72 16 98 <br> 0 0 0 0 0 0 0 1 0 <br> EXPECTED SUM = 16 <br> ACTUAL SUM = -1618659656 <br> | This is caused by garbage value from the sum variable, thus, when you compute the sum, make sure to set it to zero first outside the loop. e.g. *sum = 0; |
