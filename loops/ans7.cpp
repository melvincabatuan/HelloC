#include<iostream.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   int passes = 0;
   int failures = 0;
   int StudentCounter = 1;
   int result, total;
   
   while(StudentCounter <=5){
        printf("Enter Result 1 = pass   2 = fail : ");
        scanf("%i", &result);
        
        
   if(result == 1)
      passes = passes + 1;
   else
      failures = failures +1;
      
      StudentCounter = StudentCounter + 1;
      }
      
      printf("\nPassed : %i \n", passes);
      printf("Failed : %i \n", failures);
      
      total = passes + failures;
      printf("\nTotal examinee %i \n", total);
      
      if(passes > 2)
      printf("\n ----- Raise tuition -----\n\n\n");
      
   system("pause");
   return 0;
}
