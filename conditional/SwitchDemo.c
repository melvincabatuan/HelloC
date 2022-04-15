/*
$ gcc HelloDon.c -o HelloDon
$ ./HelloDon
Hello Don, Hello peg!
*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int day;

    printf("Please enter a single digit for a day\n");
    printf("(within the range of 1 to 3):\n");

    day = getchar();

    switch (day)
    {
    case '1':
        printf("Day 1\n");
        break;
    case '2':
        printf("Day 2\n");
        break;
    case '3':
        printf("Day 3\n");
        break;
    default:
        printf("Invalid Day! \n");
        ;
    }
    exit(0);
}
