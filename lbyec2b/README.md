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
| Can I change the function prototype? E.g. float get_readability(const char *text) into float get_readability(int l, int w, int s) | NO. Do not modify function prototypes. This will mess up the testing. |  
| For the module 2, can you please give me advises on how to solve the "3 - lab2_ex2.test_alpanumeric_count (Failed) and 6 - lab2_ex2.test_compute_readability (Failed)" po. I don't quite understand on why is it a failed when it works naman. | The testing involves numeric characters as well, e.g. char text[] = "The1 quick2 brown3 fox4 jumps5 over6 a7 lazy8 dog9 10."; ASSERT_EQ(44, alpanumeric_count(text)); The count here is 44. |
  | I have another question po regarding module 2 exercise 2. I am having trouble computing for "S" in the Coleman–Liau Index Formula. It keeps showing as a value of 0. I tried displaying the values for sentence, word, alphanumeric count and its ok naman po. | You need to cast it into float, e.g. float L=((alpanumeric_count(text)/(float)word_count(text))*100); Note: integer / integer would be zero if less than 1 |
  

### Lab 3

| Q | A|
| ------------- | ------------- |
|  Sir, if I may ask, is it possible that you check the github checker for Lab 3 Machine Problem? My code works in DEV-C, but fails to do so in Github for some reason. It always results in a very weird sum. It also says that 3 out of 4 checks are correct—and that only the sum part is messing up. E.g. 71 95 69 69 66 3 72 16 98 <br> 0 0 0 0 0 0 0 1 0 <br> EXPECTED SUM = 16 <br> ACTUAL SUM = -1618659656 <br> | This is caused by garbage value from the sum variable, thus, when you compute the sum, make sure to set it to zero first outside the loop. e.g. *sum = 0; |
  
  
  ### Lab 4
  
|Q|A|
  | ------------- | ------------- |
|Sir may question po ako sa createCourse(), if isa lang po yung gagawin course dun, para saan po yung num na parameter | The num parameter serves as course id, e.g course 1 name: Physics, here the 1 after the course is the value of the num parameter|
|Sir question regarding the lab activity 4, do we include the course struct inside the student struct? kasi po walang ibang code na nag cacall dun sa create course na function, create student lang po.| Structure #2: Student includes the array of courses: Course courses[TOTAL_COURSE] |
|sir I am confused what to do with the float computeGPA(Course courses[TOTAL_COURSE])| Here you compute the GPA, thus extract the GRADES together with their corresponding units. Then apply the GPA formula.|
 | I would like to ask a question regarding the lab activity about structures. My code seems to be working fine if I run it on DevC. However, when I run it on GitHub, the value of the string student.degree has an extra .00000 at the end of it. Could you check my code po? | Do not use gets() that's removed in the standard due to this issue and security vulnerabilities, use fgets instead. fgets() is a safer alternative of gets(). fgets() reads at most count - 1 characters from the given file stream and stores them in the character array pointed to by str. gets() on the other hand, doesn't constrain the amount of data it reads, and is thus vulnerable to extra garbage characters like what you encountered, buffer overruns, and attacks. |
| I have a concern regarding the Course function in the header file, whenever I try to run it in dev c it always says that there is an error but I followed what you have said in the previous recording to type Course courses(TOTAL_COURSE) but I can't seem to find what's wrong with it. | You should declare the courses using brackets, e.g. Course courses[TOTAL_COURSE]. This is how we declare an array.  |
  
   ### Lab 4 - homework (Machine Problem)
  
|Q|A|
  | ------------- | ------------- |
  | Comparing strings with == error: Comparison against a string literal is unspecified. | The comparison "==" is only valid for primitive types like int, char, etc., not for arrays (in C). Thus, if you need to compare strings in C which are character arrays, one must use strcmp() function or loop and perform individual character comparison. I'm glad you figured this out in your final solution. |
  | I'm currently working on the machine problem of module 4 but I can't seem to open the .csv file. I haven't made any changes on the program yet as I just want to see if the file would open properly. |  I already checked that you have completed the activity - excellent work! Regarding the file access in DevCpp, have you created the DevCpp project? In DevCpp, unlike VScode, putting the files in the same directory is not enough for the project to 'see' the files, you need to manually add them to the project. Some instructions here: https://cs.uno.edu/~jaime/Courses/2025/devCpp2025Instructions.html . <br> Create a new project. <br>A "project" can be considered as a container that is used to store all the elements that are required to compile a program. <br>- Go to the "File" menu and select "New", "Project...".<br>- Choose "Empty Project" and make sure "C++ project" is selected.<br>- Here you will also give your project a name. You can give your project any valid filename, but keep in mind that the name of your project will also be the name of your final executable.<br>- Once you have entered a name for your project, click "OK".<br>- Dev-C++ will now ask you where to save your project.<br>* You can also add pre-existing source files or files one of two ways:<br>- Go to the "Project" menu and select "Add to Project" OR<br>- Right-click on the project name in the left-hand panel and select "Add to Project". |
  | Hello sir, what am I supposed to use when I am referring to the value of the records in the lab 4 machine problems. Am I going to used variables such as records[i]->caseCode? Or is there any other way to do that? | Yes, since we're dealing with an array of pointers to structures, use the ff.: records[i]->caseCode to access the structure members (similar to the practical exam). The alternative to '->' operator is (*records[i]).caseCode.  |
