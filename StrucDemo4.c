/*
$ gcc StrucDemo4.c -o StrucDemo4
$ ./StrucDemo4 
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
 
 void DataReceive(SC *ptr_s)
 {
    printf("The type of the CPU inside your computer?\n");
    gets(ptr_s->cpu_type);
    printf("The speed(MHz) of the CPU?\n");
    scanf("%d", &(ptr_s->cpu_speed));
   // scanf("%d", ptr_s->cpu_speed); Segmentation fault
    printf("The year your computer was made?\n");
    scanf("%d", &(ptr_s->year));
    printf("How much you paid for the computer?\n");
    scanf("%f", &(ptr_s->cost));
}
 
main()
 {
  SC model;
 
  DataReceive(&model);
  printf("Here are what you entered:\n");
  printf("Year: %d\n", model.year);
  printf("Cost: $%6.2f\n", model.cost);
  printf("CPU type: %s\n", model.cpu_type);
  printf("CPU speed: %d MHz\n", model.cpu_speed);
 
 return 0;
 }
