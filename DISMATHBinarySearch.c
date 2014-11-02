#include <stdio.h>
#include <math.h>

/*
$ gcc DISMATHBinarySearch.c -lm -o DISMATHBinarySearch
PhD:~/Workspace$ ./DISMATHBinarySearch
Enter the element to search: 30
begin = 0; end = 9
data[4] = 9
begin = 5; end = 9
data[7] = 23
begin = 8; end = 9
data[8] = 25
Found at index: 9
*/


	 int find(int data[], int length, int key) {
                int location = -1; 
                int begin = 0; // beginning of the index
                int end = length - 1; // end of the index
                int mid = 0;

		while (begin < end) {

                     // Display the begin and end indices
                     printf("begin = %d; end = %d\n", begin, end); 

                     // Get the index of the last element of lower half
                     mid = floor((begin + end)/2.0);

                     // Display the last element of lower half
                     printf("data[%d] = %d\n", mid, data[mid]);

                     // Choose the upper or lower half of data 
                     if (data[mid] < key)
                         begin = mid + 1;  // upper half of data 
                     else
                         end = mid;        // lower half of data 
		}

                // Update location if element is found; default location = -1 (not found)
                if (data[begin] == key) location = begin;

		return location;
	}


	void main() {
	
                /// Input
		int numbers[] = { 1, 3, 7, 8, 9, 10, 17, 23, 25, 30};
                int numbersLength = sizeof(numbers)/sizeof(numbers[0]);
                int num;

		printf("Enter the element to search: ");
		scanf( "%d", &num);

		int n = find(numbers, numbersLength, num);

		if ((n >= 0) && (n < numbersLength)) {
			printf("Found at index: %d\n", n);
		} else {
			printf("Not Found\n");
		}
	}
