#include <stdio.h> 
#include <stdlib.h>

#define TABLE_ROWS 12 
#define TABLE_COLS 12


main()
{
  char g;
  printf("\nMenu: ");
  printf("\na: Multiplication Table, 12 x 12");
  printf("\nb: Isosceles Triangle of Asterisks");
  printf("\n Enter choice: "); 
  scanf("%c", &g);
  
  
  switch(g)
  {
    case 'a':
    case 'A':
          printf(" Multiplication Table, 12 x 12 \n");
          for(int i = 1; i<=TABLE_ROWS; i++)
          {
            for(int j = 1; j<=TABLE_COLS; j++)
              printf(" %d ", i*j);    
            printf("\n");   
          }
          break;
    case 'b':
    case 'B':
          printf(" Isosceles Triangle of Asterisks");
          int n; // number of levels for the triangle
          printf(" How many levels does your Isosceles Triangle have?");
          scanf("%d", &n);
          for(int i = 0; i<n; i++)
          {
            for(int j = 0; j<i; j++)
              printf("* ");    
            printf("\n");   
          }
          break;
    default:
     printf("Out of Range\n");
  }//ENDSWITCH
  system("PAUSE"); 
}
