//Declare arrays using the user's input
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n[10];                       // 10 items
 


    for(int i=0; i<10; i++)
    {   
    printf("Enter value n[%i] : ",i);     
    scanf("%i", &n[i]);    //input elements per item            
    }

   printf("\nElements   Values\n");

      
    for(int j=0; j<10; j++)
    {
    printf("    %i      %5.0i\n", j, n[j]); //output elements per item 
    }

    system("pause");
    return 0;
}
