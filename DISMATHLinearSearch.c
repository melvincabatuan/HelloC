#include <stdio.h>

/*
$ gcc DISMATHLinearSearch.c -o DISMATHLinearSearch
$ ./DISMATHLinearSearch
Enter the element to search: 10
Found at index: 9
*/

	int find(int data[], int length, int key) {
                int location = -1; 
                int i;
		for (i = 0; i < length; ++i) {
                     if (data[i] == key){
		         location = i;
                     }
		}
		return location;

	}

	void main() {
             
                /// Input
		int numbers[] = { 5, 4, 1, 8, 9, 6, 7, 3, 2, 10};
                int numbersLength = sizeof(numbers)/sizeof(numbers[0]);
                int num;

		printf("Enter the element to search: ");
		scanf("%d",&num);

		int n = find(numbers, numbersLength, num);
		if ((n >= 0) && (n < numbersLength)) {
			printf("Found at index: %d\n", n);
		} else {
			printf("Not Found\n");
		}
	}
