# Basic C/Cpp Coding 

This is a collection of Simple C/C++ programs for the purpose of basic programming introduction.
                                                                                         -mkc

$ gcc filename.c -o filename

 OR

$ g++ filename.cpp -o filename

## Q-and-A's

### Lab 1

| Q  | A |
| ------------- | ------------- |
| There seems to be an error with the tests in github because the test would expect an odd number even though the test was for even numbers and vice versa. Is there a problem with the code or with the test sir?  | Please read the assignment carefully - we are expecting the ODD INDEXED elements (1,3,5,7, ... and so on), regardless whether they are odd numbers or not. On the other hand,  we are expecting the EVEN INDEXED elements (0, 2, 4, ...) as well.  |
| I run my codes in DevC and it was working correctly as the output of the activity wanted. But when I placed it in github it was marked wrong, That's why I edited my codes in github and got a chech mark. However, when I placed the changes in my DevC it shows an additional output. Ex.: input: 10 45 15 26 35 25 7 12 8 3; picked the rotate forward with offset 2, its output shown in my computer are 8 3 10 45 15 26 35 25 7 12 8 3 po. Attach is a short video of the codes giving the expected output but marked wrong in github. | This has been addressed - 100% tests passed now, 0 tests failed out of 10. The issue was do NOT include the main function in the implementation, e.g. comment out the main function in lab1/ex2/ex2.cpp |


### Lab 2

| Q  | A |
| ------------- | ------------- |
| May follow up question lang po for Lab 2 as well. In the test po kasi sa github ito po yung lumabas na error. But the error it’s saying is from a code po that we are not supposed to touch. What do I do po?  | Hi xxxx, Good day! I already checked your output. The problem in the testing was that the  file was not written. I modified the path, then it worked. Good job!  |
|If I want to see the original lab2_ex1.cpp code (with the //ENTER CODE HERE!!//) what do I press po? Na-copy paste ko na po kasi yung gawa ko and its still wrong, but I wanted to backtrack on what happened.| You can revert to the previous commit. Instructions here: https://docs.github.com/en/desktop/contributing-and-collaborating-using-github-desktop/managing-commits/reverting-a-commit |
|my lab act 2 ex 2 I think is already good since it did not show up in the error. however, my ex1 seems to not be going well. as far as the code is concerned, I'm 80% sure that its good to go since testing it on dev c++ yields the correct pattern as well as output into a txt file. I'm having a hard time diagnosing the problem through reading the test logs so I wanted to ask for help and advice.| Hi xxxx, Good day! Your output doesn't satisfy the expected output yet: your output <br>input: de la salle <br>ede la sall <br>lede la sal <br>llede la sa <br> allede la s <br>sallede la <br>sallede la <br>a sallede l <br>la sallede <br>la sallede <br>e la salled <br>Expected:  <br>de la salle  <br>ede la sall  <br>lede la sal  <br>llede la sa  <br>allede la s  <br>sallede la  <br>sallede la  <br>a sallede l  <br>la sallede  <br>la sallede  <br>e la salled  <br>| 
| Can we replace fgets with scanf("%[^\n]s",&input); in the ex1_main?  | NO! Using scanf for %s is not a good prcatice, thus don't do this. |
