#include<stdio.h>
#include<stdlib.h>

#define MAX_ROWS 3
#define MAX_COLS 3


int main()
{
	int matA[MAX_ROWS][MAX_COLS];
	//int matB[MAX_ROWS][MAX_COLS];
	//int result[MAX_ROWS][MAX_COLS];

	int matA_rows, matA_cols;

	printf("Enter nember of rows (MAX is %d): ", MAX_ROWS);
	scanf("%d",&matA_rows);
	printf("Enter nember of cols (MAX is %d): ", MAX_COLS);
	scanf("%d",&matA_cols);
	puts("Enter the elements:");
	for (int i = 0; i < matA_rows; ++i)
		for (int j = 0; j < matA_cols; ++j)
			scanf("%d", &matA[i][j]);
	puts("The elements are ");
	for (int i = 0; i < matA_rows; ++i){
		for (int j = 0; j < matA_cols; ++j){
			printf("%d ", matA[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
