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

 
 

	void selection(int input[], int length) {
                int temp, i, j;              
                for(i = 0; i < length - 1; i++){
                   printf("i = %d: \n", i);
                   for(j = i+1; j < length; j++){
                       if (input[i] > input[j]){ // Swap
                           temp = input[i];
                           input[i] = input[j];
                           input[j] = temp;
                        }
                     display(input, length);
                   }
                }
	}




	void main() {
                /// Input
		int numbers[] = { 5, 4, 1, 8, 9, 6, 7, 10, 3, 2};
                int numbersLength = sizeof(numbers)/sizeof(numbers[0]);

                printf("Selection sorting ...\n");
                selection(numbers, numbersLength);

                printf("Sorted Array:\n");
                display(numbers, numbersLength);
 
	}


/*

$ gcc DISMATHSelectionSort.c -o DISMATHSelectionSort
$ ./DISMATHSelectionSort
Selection sorting ...
i = 0: 
{4, 5, 1, 8, 9, 6, 7, 10, 3, 2}
{1, 5, 4, 8, 9, 6, 7, 10, 3, 2}
{1, 5, 4, 8, 9, 6, 7, 10, 3, 2}
{1, 5, 4, 8, 9, 6, 7, 10, 3, 2}
{1, 5, 4, 8, 9, 6, 7, 10, 3, 2}
{1, 5, 4, 8, 9, 6, 7, 10, 3, 2}
{1, 5, 4, 8, 9, 6, 7, 10, 3, 2}
{1, 5, 4, 8, 9, 6, 7, 10, 3, 2}
{1, 5, 4, 8, 9, 6, 7, 10, 3, 2}
i = 1: 
{1, 4, 5, 8, 9, 6, 7, 10, 3, 2}
{1, 4, 5, 8, 9, 6, 7, 10, 3, 2}
{1, 4, 5, 8, 9, 6, 7, 10, 3, 2}
{1, 4, 5, 8, 9, 6, 7, 10, 3, 2}
{1, 4, 5, 8, 9, 6, 7, 10, 3, 2}
{1, 4, 5, 8, 9, 6, 7, 10, 3, 2}
{1, 3, 5, 8, 9, 6, 7, 10, 4, 2}
{1, 2, 5, 8, 9, 6, 7, 10, 4, 3}
i = 2: 
{1, 2, 5, 8, 9, 6, 7, 10, 4, 3}
{1, 2, 5, 8, 9, 6, 7, 10, 4, 3}
{1, 2, 5, 8, 9, 6, 7, 10, 4, 3}
{1, 2, 5, 8, 9, 6, 7, 10, 4, 3}
{1, 2, 5, 8, 9, 6, 7, 10, 4, 3}
{1, 2, 4, 8, 9, 6, 7, 10, 5, 3}
{1, 2, 3, 8, 9, 6, 7, 10, 5, 4}
i = 3: 
{1, 2, 3, 8, 9, 6, 7, 10, 5, 4}
{1, 2, 3, 6, 9, 8, 7, 10, 5, 4}
{1, 2, 3, 6, 9, 8, 7, 10, 5, 4}
{1, 2, 3, 6, 9, 8, 7, 10, 5, 4}
{1, 2, 3, 5, 9, 8, 7, 10, 6, 4}
{1, 2, 3, 4, 9, 8, 7, 10, 6, 5}
i = 4: 
{1, 2, 3, 4, 8, 9, 7, 10, 6, 5}
{1, 2, 3, 4, 7, 9, 8, 10, 6, 5}
{1, 2, 3, 4, 7, 9, 8, 10, 6, 5}
{1, 2, 3, 4, 6, 9, 8, 10, 7, 5}
{1, 2, 3, 4, 5, 9, 8, 10, 7, 6}
i = 5: 
{1, 2, 3, 4, 5, 8, 9, 10, 7, 6}
{1, 2, 3, 4, 5, 8, 9, 10, 7, 6}
{1, 2, 3, 4, 5, 7, 9, 10, 8, 6}
{1, 2, 3, 4, 5, 6, 9, 10, 8, 7}
i = 6: 
{1, 2, 3, 4, 5, 6, 9, 10, 8, 7}
{1, 2, 3, 4, 5, 6, 8, 10, 9, 7}
{1, 2, 3, 4, 5, 6, 7, 10, 9, 8}
i = 7: 
{1, 2, 3, 4, 5, 6, 7, 9, 10, 8}
{1, 2, 3, 4, 5, 6, 7, 8, 10, 9}
i = 8: 
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
Sorted Array:
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

*/

/*********************** MKC ***************************/