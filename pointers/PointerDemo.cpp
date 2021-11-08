#include <stdio.h>
#include <stdlib.h>

main(){

     int myArray[6];
     myArray[6] = {1,2,3,4,5,6};      

     printf("myArray = %p \n", myArray);
     printf("\n");
     
     printf("Enter an integer value:");
     scanf("%d", myArray);
     
      
     
     /// myArray[0], myArray[1], myArray[2], myArray[3], myArray[4]  
     
     
     printf("The address of myArray[0] is 0x%p.\n", &myArray[0]);
     printf("The content of myArray[0] is %d.\n", myArray[0]);
     
     printf("The address of myArray[1] is 0x%p.\n", &myArray[1]);
     printf("The content of myArray[1] is %d.\n", myArray[1]);
     
     printf("The address of myArray[2] is 0x%p.\n", &myArray[2]);
     printf("The content of myArray[2] is %d.\n", myArray[2]);
     
          printf("The address of myArray[3] is 0x%p.\n", &myArray[3]);
     printf("The content of myArray[3] is %d.\n", myArray[3]);
     
          printf("The address of myArray[4] is 0x%p.\n", &myArray[4]);
     printf("The content of myArray[4] is %d.\n", myArray[4]);
     
     printf("The address of myArray[5] is 0x%p.\n", &myArray[5]);
     printf("The content of myArray[5] is %d.\n", myArray[5]);
     
     
     
     
     
     
     
     
       
    /*   
    int x;
    printf("The address of x is 0x%p.\n", &x);
    printf("The content of x is %d.\n", x);
    
    x = 721;
    printf("The address of x is 0x%p.\n", &x);
    printf("The content of x is %d.\n", x);
    */
    
    
    
    system("pause");       
}
