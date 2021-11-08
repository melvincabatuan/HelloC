#include <stdio.h>
#include <stdlib.h>


void assignValues(int[], int);
void displayValues(int[], int);
void sumValues(int cabatuan[], int MAX, int *psum);
const int MAX = 3;

int main ()
{ 
    int data[MAX]; 
    int sum = 0;
    
    /// Call a function
     assignValues(data, MAX); //testScore = address of the first element of array
                                  // MAX = max elements of an array
    
     displayValues(data, MAX);
    
    
     sumValues(data, MAX, &sum);
     
     printf("The sum is equals to %d.\n", sum);
    
    system("pause");
    return 0;
}

void assignValues(int data[], int MAX){ 
     for (int i = 0; i < MAX; i++) 
     { 
         printf( "Enter test score #%d:", i + 1 );  
         scanf("%d", &data[i]); 
     }
}

void displayValues(int cabatuan[], int melvin){ 
     for (int i = 0; i < melvin; i++) 
     {
         printf( " %d ", i + 1, cabatuan[i]);  
     }
}


void sumValues(int cabatuan[], int MAX, int *psum){ // 
      *psum = 0;
     
     for (int i = 0; i < MAX; i++) 
     {
         *psum = *psum + cabatuan[i];  
     }      
}
