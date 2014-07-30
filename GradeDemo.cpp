#include <stdio.h> 
#include <stdlib.h> 

main()
{
  int g;
  printf("\nEnter grade: "); 
  scanf("%d", &g);
  
  if ((g>=90) && (g<=100)) printf("A\n");
  else if ((g>=80) && (g<=89)) printf("B\n");
  else if ((g>=70) && (g<=79)) printf("C\n");
  else if ((g>=60) && (g<=69)) printf("D\n");
  else if ((g>=50) && (g<=59)) printf("F\n");
  else
     printf("Out of Range\n");
  system("PAUSE"); 
}
