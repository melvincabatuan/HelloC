#include<stdio.h>
#include<stdlib.h>

#define MAX_ROWS 3
#define MAX_COLS 3


void add2matrices(int matA[MAX_ROWS][MAX_COLS], int matB[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS]){
	for (int i = 0; i < MAX_ROWS; ++i)
		for (int j = 0; j < MAX_COLS; ++j)
			result[i][j] = matA[i][j] + matB[i][j];
}


void mult2matrices(int matA[MAX_ROWS][MAX_COLS], int matB[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int A_rows, int B_cols){
	int temp;
	for (int i = 0; i < A_rows; ++i){
		for (int j = 0; j <B_cols; ++j){
			temp = 0;
			for(int k = 0; k < A_rows; ++k){
				 temp = temp + matA[i][k] * matB[k][j];
			}
			result[i][j] = temp;
		}
	}
}




int main(void)
{
	int matA[MAX_ROWS][MAX_COLS];
	int matB[MAX_ROWS][MAX_COLS];
	int result[MAX_ROWS][MAX_COLS];

	int matA_rows, matA_cols;

	puts("For Matrix A: ");
	printf("Enter number of rows (MAX is %d): ", MAX_ROWS);
	scanf("%d",&matA_rows);
	printf("Enter number of cols (MAX is %d): ", MAX_COLS);
	scanf("%d",&matA_cols);
	puts("Enter the elements:\n");
	for (int i = 0; i < matA_rows; ++i){
		for (int j = 0; j < matA_cols; ++j){
			scanf("%d", &matA[i][j]);
		}
	}

	puts("For Matrix B: ");
	int matB_rows, matB_cols;
	printf("Enter number of rows (MAX is %d): ", MAX_ROWS);
	scanf("%d",&matB_rows);
	printf("Enter number of cols (MAX is %d): ", MAX_COLS);
	scanf("%d",&matB_cols);
	puts("Enter the elements:\n");
	for (int i = 0; i < matB_rows; ++i){
		for (int j = 0; j < matB_cols; ++j){
			scanf("%d", &matB[i][j]);
		}
	}

	//add2matrices(matA, matB, result);
	mult2matrices(matA, matB, result, matA_rows, matB_cols);
	//mytranspose(matA, result);


	puts("The product is ");
	for (int i = 0; i < matA_rows; ++i){
		for (int j = 0; j < matB_cols; ++j){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
