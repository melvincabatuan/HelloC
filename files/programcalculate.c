/*C Program to calculate the average of a list of numbers.*/
/*calculate the total from one file, output the average*/
/*into another file*/
#include <stdio.h>
/*for exit()*/
#include <stdlib.h>
int main(void)
{
    int value, total = 0, count = 0;
    /*fileptrIn and fileptrOut are variables of type (FILE *)*/
    FILE *fileptrIn, *fileptrOut;
    char filenameIn[100], filenameOut[100];
    printf("Please enter an input filename (use path if needed):\n");
    scanf("%s", filenameIn);
    printf("Please enter an output filename (use path if needed):\n");
    scanf("%s", filenameOut);
    /*open files for reading, "r" and writing, "w"*/
    if ((fileptrIn = fopen(filenameIn, "r")) == NULL)
    {
        printf("Error opening %s for reading.\n", filenameIn);
        exit(1);
    }
    else
        printf("Opening %s for reading is OK.\n", filenameIn);
    if ((fileptrOut = fopen(filenameOut, "w")) == NULL)
    {
        printf("Error opening %s for writing.\n", filenameOut);
        exit(1);
    }
    else
        printf("Opening %s for writing is OK.\n", filenameOut);
    /*fscanf*/
    printf("\nCalculate the total...\n");
    while (EOF != fscanf(fileptrIn, "%i", &value))
    {
        total += value;
        ++count;
    } /*end of while loop*/
    /*Write the average value to the file.*/
    /*fprintf*/
    printf("Calculate the average...\n\n");
    fprintf(fileptrOut, "Average of %i numbers = %f \n", count, total / (double)count);
    printf("Average of %i numbers = %f \n\n", count, total / (double)count);
    printf("Check also your %s file content\n", filenameOut);
    if (fclose(fileptrIn) == 0)
        printf("%s closed successfully\n", filenameIn);
    if (fclose(fileptrOut) == 0)
        printf("%s closed successfully\n", filenameOut);
    return 0;
}
