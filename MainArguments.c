#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments to the main functions: %d\n", argc);
    int i = 0;
    for(i = 0; i < argc; i++){
        printf("Argument number %d is %s\n", i, argv[i]);
     } 
    return 0;
}

/*
$ ./MainArguments Melvin Kong Cabatuan
Number of arguments to the main functions: 4
Argument number 0 is ./MainArguments
Argument number 1 is Melvin
Argument number 2 is Kong
Argument number 3 is Cabatuan

*/
