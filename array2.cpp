//Graphing array element by user's input with histogram



#include<stdio.h>
#include<stdlib.h>


main()

{
    //Array Declaration
    const int arraySize = 10;
    int n[arraySize];                             

    //Array Input 
    for(int x=0; x<arraySize; x++)
    {
            printf("Enter value n[%i] : ",x);     
            scanf("%i", &n[x]);    
    }

    printf("\nelement   value     histogram\n");

    //Array Output
    for(int i=0; i<arraySize; i++)
    {   
       printf("%i      %5.0i        ", i, n[i]);   
         for(int j=0; j<n[i]; j++)
         printf("*");
       printf("\n");
    }
    system("pause");
}
