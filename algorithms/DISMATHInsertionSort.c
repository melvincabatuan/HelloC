#include <stdio.h>

/*********************** MKC ***************************/
      
         void display(int array[], int length){           
           printf("{%d", array[0]);
           int i;
		for (i = 1; i < length; i++) {
			printf(", %d", array[i]);
		}
		 printf("}\n");
        }

 
 

	void insertion(int input[], int length) {
                int temp, i, j;              
                for(i = 1; i < length; i++){
                   printf("i = %d; ", i);
                   temp = input[i];
                   printf("temp = %d", temp);
                   printf("\n");
                   j = i - 1; // index of previous element 
                   while(j > -1 && input[j] > temp){
                        input[j+1]=input[j];
                        j--; 
                   display(input, length);
                   }
                   input[j+1] = temp;   
                   display(input, length);                
                }
	}




	void main() {
                /// Input
		int numbers[] = { 5, 4, 1, 8, 9, 6, 7, 3, 2, 10};
                int numbersLength = sizeof(numbers)/sizeof(numbers[0]);

                printf("Insertion sorting ...\n");
                insertion(numbers, numbersLength);

                printf("Sorted Array:\n");
                display(numbers, numbersLength);
 
	}


/*

$ gcc DISMATHInsertionSort.c -o DISMATHInsertionSort
$ ./DISMATHInsertionSort 
Insertion sorting ...
i = 1; temp = 4
{5, 5, 1, 8, 9, 6, 7, 3, 2, 10}
{4, 5, 1, 8, 9, 6, 7, 3, 2, 10}
i = 2; temp = 1
{4, 5, 5, 8, 9, 6, 7, 3, 2, 10}
{4, 4, 5, 8, 9, 6, 7, 3, 2, 10}
{1, 4, 5, 8, 9, 6, 7, 3, 2, 10}
i = 3; temp = 8
{1, 4, 5, 8, 9, 6, 7, 3, 2, 10}
i = 4; temp = 9
{1, 4, 5, 8, 9, 6, 7, 3, 2, 10}
i = 5; temp = 6
{1, 4, 5, 8, 9, 9, 7, 3, 2, 10}
{1, 4, 5, 8, 8, 9, 7, 3, 2, 10}
{1, 4, 5, 6, 8, 9, 7, 3, 2, 10}
i = 6; temp = 7
{1, 4, 5, 6, 8, 9, 9, 3, 2, 10}
{1, 4, 5, 6, 8, 8, 9, 3, 2, 10}
{1, 4, 5, 6, 7, 8, 9, 3, 2, 10}
i = 7; temp = 3
{1, 4, 5, 6, 7, 8, 9, 9, 2, 10}
{1, 4, 5, 6, 7, 8, 8, 9, 2, 10}
{1, 4, 5, 6, 7, 7, 8, 9, 2, 10}
{1, 4, 5, 6, 6, 7, 8, 9, 2, 10}
{1, 4, 5, 5, 6, 7, 8, 9, 2, 10}
{1, 4, 4, 5, 6, 7, 8, 9, 2, 10}
{1, 3, 4, 5, 6, 7, 8, 9, 2, 10}
i = 8; temp = 2
{1, 3, 4, 5, 6, 7, 8, 9, 9, 10}
{1, 3, 4, 5, 6, 7, 8, 8, 9, 10}
{1, 3, 4, 5, 6, 7, 7, 8, 9, 10}
{1, 3, 4, 5, 6, 6, 7, 8, 9, 10}
{1, 3, 4, 5, 5, 6, 7, 8, 9, 10}
{1, 3, 4, 4, 5, 6, 7, 8, 9, 10}
{1, 3, 3, 4, 5, 6, 7, 8, 9, 10}
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
i = 9; temp = 10
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
Sorted Array:
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

*/

/*********************** MKC ***************************/
