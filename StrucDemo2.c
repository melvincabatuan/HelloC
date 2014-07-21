/*
$ gcc StrucDemo2.c -o StrucDemo2
$ ./StrucDemo2
Here is a sample:
Student Name: J. Teng
Student ID #: 1122345

What's your name?
A. Kay
What's your ID number?
1111111

Here are what you entered:
Name: A. Kay
ID #: 1111111

*/

#include <stdio.h>

main()
{
 struct student {
 int id;
 char name[32];
 };
 
  struct student info = { 1122345, "J. Teng" };
 
  printf("Here is a sample:\n");
  printf("Student Name: %s\n", info.name);
  printf("Student ID #: %04d\n\n", info.id);
 
  printf("What's your name?\n");
  gets(info.name);
  printf("What's your ID number?\n");
  scanf("%d", &info.id);
 
  printf("\nHere are what you entered:\n");
  printf("Name: %s\n", info.name);
  printf("ID #: %04d\n", info.id);
  return 0;
}
