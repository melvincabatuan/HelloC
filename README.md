# Basic C/Cpp Coding 

This is a collection of Simple C programs for the purpose of basic programming introduction.
                                                                                         -mkc

$ gcc filename.c -o filename

 OR

$ clang filename.c -o filename

## Q-and-A's

### General
| Q  | A |
| ------------- | ------------- |
| fatal error: conio.h: No such file or directory | Do not use conio since this is associated with the old MS-DOS Windows system, thus not portable.|
| ERROR: Undefined reference to 'WinMain'...ld returned 1 exit status...  | Make sure to save the file before run: CTRL + S |


## Adding comments to code
|  |
| ------------- |
| Rule 1: Comments should not duplicate the code 
Rule 2: Good comments do not excuse unclear code 
Rule 3: If you can’t write a clear comment, there may be a problem with the code
Rule 4: Comments should dispel confusion, not cause it
Rule 5: Explain unidiomatic code in comments
Rule 6: Provide links to the original source of copied code
Rule 7: Include links to external references where they will be most helpful 
Rule 8: Add comments when fixing bugs
Rule 9: Use comments to mark incomplete implementations.  |
( https://stackoverflow.blog/2021/12/23/best-practices-for-writing-code-comments ) 
### Lab 3

| Q  | A |
| ------------- | ------------- |
|Bad Practice: No return statement!| If no return statement appears in a function definition, control automatically returns to the calling function after the last statement of the called function is executed. In this case, the return value of the called function is undefined. If the function has a return type other than void, it's a serious bug, and the compiler prints a warning diagnostic message. If the function has a void return type, this behavior is okay, but may be considered poor style. Use a plain return statement to make your intent clear. |
|Variable names |By Convention: The names of variables, constants, and functions are to begin with a lowercase letter, while the names of structures, typedefs, and enumerated types are to begin with an uppercase letter.|