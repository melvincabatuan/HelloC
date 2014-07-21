/*
$ gcc StrucDemo3.c -o StrucDemo3
$ ./StrucDemo3
The type of the CPU inside your computer?
I3
The speed(MHz) of the CPU?
2300
The year your computer was made?
2012
How much you paid for the computer?
500
Here are what you entered:
Year: 2012
Cost: $500.00
CPU type: I3
CPU speed: 2300 MHz
*/

#include <stdio.h>
 
 struct computer {
   float cost;
   int year;
   int cpu_speed;
   char cpu_type[16];
 };
 
 typedef struct computer SC;
 
 SC DataReceive(SC s)
 {
    printf("The type of the CPU inside your computer?\n");
    gets(s.cpu_type);
    printf("The speed(MHz) of the CPU?\n");
    scanf("%d", &s.cpu_speed);
    printf("The year your computer was made?\n");
    scanf("%d", &s.year);
    printf("How much you paid for the computer?\n");
    scanf("%f", &s.cost);
    return s;
}
 
main()
 {
  SC model;
 
  model = DataReceive(model);
  printf("Here are what you entered:\n");
  printf("Year: %d\n", model.year);
  printf("Cost: $%6.2f\n", model.cost);
  printf("CPU type: %s\n", model.cpu_type);
  printf("CPU speed: %d MHz\n", model.cpu_speed);
 
 return 0;
 }
