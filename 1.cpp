#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number = 0; 	/* Stores a number */
	int count = 10; 	/* Number of values to be read */
	long sum = 0L; 	/* Sum of the numbers */
	float average = 0.0f; 	/* Average of the numbers */

	/* Read the ten numbers to be averaged */
	for(int i = 0; i < count; i ++)
	{
		printf("Enter grade: ");
		scanf("%d", &number); 	/* Read a number */
		sum += number; 	/* Add it to sum */
	}
		average = (float)sum/count; 	/* Calculate the average */
		printf("\nAverage of the ten numbers entered is: %f\n", average);
		system("pause");
		
	return 0;
}
