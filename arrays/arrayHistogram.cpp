//Graphing array element values with histogram
#include<stdio.h>
#include<stdlib.h>

int main()
{
    const int arraySize = 10;
    int n[arraySize] = {20, 8, 5, 5, 14, 10, 1, 9, 11, 6};
    printf("\nElement   Value     Histogram\n");

    for(int i=0; i<arraySize; i++){   
       printf("%i      %5.0i        ", i, n[i]);   
        
    for(int j=0; j<n[i]; j++)
       printf("*");
       printf("\n");
    }
   
    system("pause");
    return 0;
}
