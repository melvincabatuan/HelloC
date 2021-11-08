/*
$ gcc IfDefineDemo2.c -o IfDefineDemo2
$ ./IfDefineDemo2
I know both BASIC and C languages.

*/
#include <stdio.h>
 
#define C_LANG 'C'
#define B_LANG 'B'
#define NO_ERROR 0
 
 main()
 {
    #if C_LANG == 'C'  &&  B_LANG == 'B' 
         printf("I know both BASIC and C languages.\n");
    #elif C_LANG == 'C'
         #undef C_LANG
         #define C_LANG "I only know C language.\n"
         printf("%s", C_LANG);
    #elif B_LANG == 'B'
          #undef B_LANG
          #define B_LANG "I only know BASIC.\n"
          printf("%s", B_LANG);
    #else
          printf("I don't know C or BASIC.\n");
    #endif

    return NO_ERROR;
}
