/*
$ gcc StrucDemo.c -o StrucDemo
$ ./StrucDemo
The type of the CPU inside your computer?
CoreI3
The speed(GHz) of the CPU?
2.3
The year your computer was made?
2011
How much you paid for the computer?
500
Here are what you entered:
Year: 2011
Cost: $500.00
CPU type: CoreI3
CPU speed: 2.3 GHz
*/

#include <stdio.h>

main()
{
  struct computer {
  float cost;
  int year;
  float cpu_speed;
  char cpu_type[16];
  } model;
 
  printf("The type of the CPU inside your computer?\n");
  gets(model.cpu_type);
  printf("The speed(GHz) of the CPU?\n");
  scanf("%f", &model.cpu_speed);
  printf("The year your computer was made?\n");
  scanf("%d", &model.year);
  printf("How much you paid for the computer?\n");
  scanf("%f", &model.cost);
 
  printf("Here are what you entered:\n");
  printf("Year: %d\n", model.year);
  printf("Cost: $%6.2f\n", model.cost);
  printf("CPU type: %s\n", model.cpu_type);
  printf("CPU speed: %.1f GHz\n", model.cpu_speed);
 
  return 0;
}
