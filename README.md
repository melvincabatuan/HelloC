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


### Lab 2

| Q  | A |
| ------------- | ------------- |
| May follow up question lang po for Lab 2 as well. In the test po kasi sa github ito po yung lumabas na error. But the error it’s saying is from a code po that we are not supposed to touch. What do I do po?  | Hi xxxx, Good day! I already checked your output. The problem in the testing was that the  file was not written. I modified the path, then it worked. Good job!  |
|If I want to see the original lab2_ex1.cpp code (with the //ENTER CODE HERE!!//) what do I press po? Na-copy paste ko na po kasi yung gawa ko and its still wrong, but I wanted to backtrack on what happened.| You can revert to the previous commit. Instructions here: https://docs.github.com/en/desktop/contributing-and-collaborating-using-github-desktop/managing-commits/reverting-a-commit |
|my lab act 2 ex 2 I think is already good since it did not show up in the error. however, my ex1 seems to not be going well. as far as the code is concerned, I'm 80% sure that its good to go since testing it on dev c++ yields the correct pattern as well as output into a txt file. I'm having a hard time diagnosing the problem through reading the test logs so I wanted to ask for help and advice.| Hi xxxx, Good day! Your output doesn't satisfy the expected output yet: your output <br>input: de la salle <br>ede la sall <br>lede la sal <br>llede la sa <br> allede la s <br>sallede la <br>sallede la <br>a sallede l <br>la sallede <br>la sallede <br>e la salled <br>Expected:  <br>de la salle  <br>ede la sall  <br>lede la sal  <br>llede la sa  <br>allede la s  <br>sallede la  <br>sallede la  <br>a sallede l  <br>la sallede  <br>la sallede  <br>e la salled  <br>| 
