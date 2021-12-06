#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 3
#define MAX_COLS 3

int main (){

	
	int myArray[MAX_ROWS][MAX_COLS] = {1, 2, 3, 4, 5, 6, 7, 8 ,9};
	
	int i, j;
	
	int rows = 1;
	int cols = 3;
	
	// Print array
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			printf("%d ", myArray[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
