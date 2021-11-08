/* 
$ gcc EnumDemo.c -o EnumDemo
$ ./EnumDemo 
human: 100, animal: 50, computer: 51
SUN: 0
MON: 1
TUE: 2
WED: 3
THU: 4
FRI: 5
SAT: 6
Enter Day (0 to 6): 5
FRIDAY

*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 enum language {human=100, animal=50, computer};
 enum days{ SUN, MON, TUE, WED, THU, FRI, SAT};
 
 printf("human: %d, animal: %d, computer: %d\n", human, animal, computer);
 printf("SUN: %d\n", SUN);
 printf("MON: %d\n", MON);
 printf("TUE: %d\n", TUE);
 printf("WED: %d\n", WED);
 printf("THU: %d\n", THU);
 printf("FRI: %d\n", FRI);
 printf("SAT: %d\n", SAT);

 int choice;
 printf("Enter Day (0 to 6): ");
 scanf("%d",&choice);  

 switch(choice){ 
    case SUN:
         printf("SUNDAY");
         break;
    case MON:
         printf("MONDAY");
         break;
    case TUE:
         printf("TUESDAY");
         break;
    case WED:
         printf("WEDNESDAY");
         break;
    case THU:
         printf("THURSDAY");
         break;
    case FRI:
         printf("FRIDAY");
         break;
    case SAT:
         printf("SATURDAY");
         break;
    default:
         printf("INVALID DAY!");
  }//ENDSWITCH
 printf("\n");
 exit(0);
}
