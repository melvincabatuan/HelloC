/*
$ gcc MainInputArgsDemo.c -o MainInputArgsDemo
$ ./MainInputArgsDemo Melvin Kong Cabatuan
The value received by argc is 4.
There are 4 command-line arguments passed to main().
The first command-line argument is: ./MainInputArgsDemo
The rest of the command-line arguments are:
Melvin
Kong
Cabatuan
*/

#include <stdio.h>

main(int argc, char *argv[])
/* argc and argv are normally used as the two built-in arguments in the main() function,
   but you can use other names to replace them in their declarations. */
{
  int i;

  printf("The value received by argc is %d.\n", argc);
  printf("There are %d command-line arguments passed to main().\n", argc);

  printf("The first command-line argument is: %s\n", argv[0]);
  // Note: the name of the program itself is counted as the first argument.

  printf("The rest of the command-line arguments are:\n");

  for (i = 1; i < argc; i++)
    printf("%s\n", argv[i]);

  return 0;
}
