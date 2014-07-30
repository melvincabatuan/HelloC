#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number[10]; 	/* Array that stores a maximum of 10 numbers */
	int count = 10; 	/* Number of values to be read */
	long sum = 0L; 	/* Sum of the numbers */
	float average = 0.0f; 	/* Average of the numbers */


    /* Read the ten numbers to be averaged */
	for(int i = 0; i < count; i ++)
	{
		printf("Enter grade: ");
	    scanf("%d", &number[i]); 	/* Read a number */
    } 	


	/* Get sum of the ten numbers to be averaged */
	for(int i = 0; i < count; i ++)
	{
		sum += number[i]; 	/* Add it to sum */
	}
		average = (float)sum/count; 	/* Calculate the average */
		printf("\nAverage of the ten numbers entered is: %f\n", average);
		system("pause");

	return 0;
}
