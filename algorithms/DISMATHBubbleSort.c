#include<stdio.h>
#define true 1

/*********************** MKC ***************************/
       
         void display(int array[], int length){           
           printf("{%d", array[0]);
           int i;
		for (i = 1; i < length; i++) {
			printf(", %d", array[i]);
		}
		 printf("}\n");
        }



	 void bubble(int input[], int length) {
                int temp;  
                int i, j;            
                for(i = 0; i < length - 1; i++){
                    printf("i = %d\n", i);
                    for(j = 0; j < length - i - 1; j++){
                        if(input[j] > input[j+1]){ /// Swap the two values
                           temp = input[j];
                           input[j] = input[j+1]; 
                           input[j+1] = temp;
                         }
                      display(input, length);
                    } 
                }
	}

         
        void bubble2(int input[], int length) {
                int temp; // temporary variable used in swapping
                int swaps; // number of swaps per iteration  
                int i = 0; // bubble sort iteration   
                int j;     
                while(true){
                    printf("i = %d\n", i);
                    swaps = 0;

                    for(j = 0; j < length - i - 1; j++){
                        if(input[j] > input[j+1]){ /// Swap the two values
                           temp = input[j];
                           input[j] = input[j+1]; 
                           input[j+1] = temp;
                           swaps++;
                         }
                      display(input, length);
                    }

                    /// termination/ sentinel
                   if (swaps == 0)
                     break;

                   i++;
                }
	}


 


	void main() {

                 /// Input
		int numbers[] = { 5, 4, 1, 8, 9, 6, 7, 3, 2, 10};
                int numbersLength = sizeof(numbers)/sizeof(numbers[0]);

                printf("Bubble sorting ...\n");
                bubble(numbers, numbersLength);

                printf("Sorted Array:\n");
                display(numbers, numbersLength);
	}


  /*

$ gcc DISMATHBubbleSort.c -o DISMATHBubbleSort
$ ./DISMATHBubbleSort 
Bubble sorting ...
i = 0
{4, 5, 1, 8, 9, 6, 7, 3, 2, 10}
{4, 1, 5, 8, 9, 6, 7, 3, 2, 10}
{4, 1, 5, 8, 9, 6, 7, 3, 2, 10}
{4, 1, 5, 8, 9, 6, 7, 3, 2, 10}
{4, 1, 5, 8, 6, 9, 7, 3, 2, 10}
{4, 1, 5, 8, 6, 7, 9, 3, 2, 10}
{4, 1, 5, 8, 6, 7, 3, 9, 2, 10}
{4, 1, 5, 8, 6, 7, 3, 2, 9, 10}
{4, 1, 5, 8, 6, 7, 3, 2, 9, 10}
i = 1
{1, 4, 5, 8, 6, 7, 3, 2, 9, 10}
{1, 4, 5, 8, 6, 7, 3, 2, 9, 10}
{1, 4, 5, 8, 6, 7, 3, 2, 9, 10}
{1, 4, 5, 6, 8, 7, 3, 2, 9, 10}
{1, 4, 5, 6, 7, 8, 3, 2, 9, 10}
{1, 4, 5, 6, 7, 3, 8, 2, 9, 10}
{1, 4, 5, 6, 7, 3, 2, 8, 9, 10}
{1, 4, 5, 6, 7, 3, 2, 8, 9, 10}
i = 2
{1, 4, 5, 6, 7, 3, 2, 8, 9, 10}
{1, 4, 5, 6, 7, 3, 2, 8, 9, 10}
{1, 4, 5, 6, 7, 3, 2, 8, 9, 10}
{1, 4, 5, 6, 7, 3, 2, 8, 9, 10}
{1, 4, 5, 6, 3, 7, 2, 8, 9, 10}
{1, 4, 5, 6, 3, 2, 7, 8, 9, 10}
{1, 4, 5, 6, 3, 2, 7, 8, 9, 10}
i = 3
{1, 4, 5, 6, 3, 2, 7, 8, 9, 10}
{1, 4, 5, 6, 3, 2, 7, 8, 9, 10}
{1, 4, 5, 6, 3, 2, 7, 8, 9, 10}
{1, 4, 5, 3, 6, 2, 7, 8, 9, 10}
{1, 4, 5, 3, 2, 6, 7, 8, 9, 10}
{1, 4, 5, 3, 2, 6, 7, 8, 9, 10}
i = 4
{1, 4, 5, 3, 2, 6, 7, 8, 9, 10}
{1, 4, 5, 3, 2, 6, 7, 8, 9, 10}
{1, 4, 3, 5, 2, 6, 7, 8, 9, 10}
{1, 4, 3, 2, 5, 6, 7, 8, 9, 10}
{1, 4, 3, 2, 5, 6, 7, 8, 9, 10}
i = 5

/*********************** MKC ***************************/
{1, 4, 3, 2, 5, 6, 7, 8, 9, 10}
{1, 3, 4, 2, 5, 6, 7, 8, 9, 10}
{1, 3, 2, 4, 5, 6, 7, 8, 9, 10}
{1, 3, 2, 4, 5, 6, 7, 8, 9, 10}
i = 6
{1, 3, 2, 4, 5, 6, 7, 8, 9, 10}
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
i = 7
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
i = 8
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
Sorted Array:
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
*/

