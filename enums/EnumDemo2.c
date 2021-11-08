/* 
$ gcc EnumDemo2.c -o EnumDemo2
$ ./EnumDemo2
money_units[0] = 100 
money_units[1] = 25 
money_units[2] = 10 
money_units[3] = 5 
money_units[4] = 1 
Enter a monetary value in cents:
272
Which is equivalent to:
2 dollar(s) 2 quarter(s) 2 dime(s) 2 penny(s) 
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  int cent, tmp, i;
 enum units{penny = 1, nickel = 5, dime = 10, quarter = 25, dollar = 100};
 int money_units[5] = { dollar, quarter, dime, nickel, penny};
 for (i=0; i<5; i++)
      printf("money_units[%d] = %d \n", i, money_units[i]);
 char *unit_name[5] = { "dollar(s)", "quarter(s)", "dime(s)", "nickel(s)", "penny(s)"};


 printf("Enter a monetary value in cents:\n");
 scanf("%d", &cent);
 
 printf("Which is equivalent to:\n");
 tmp = 0;
 for (i=0; i<5; i++){
    tmp = cent / money_units[i];
    cent -= tmp * money_units[i];
    if (tmp)
    printf("%d %s ", tmp, unit_name[i]);
    }
 printf("\n");
 exit(0);
 }
