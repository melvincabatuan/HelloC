// Opening and closing file example
#include <stdio.h>
#include <stdlib.h>

// SUCCESS = 0, FAIL = 1 using enumeration
enum
{
    SUCCESS,
    FAIL
};

int main(void)
{
    FILE *fptr;
    // the filename is exer1.txt and located in the same folder as this program
    char filename[] = "C://exer1.txt";

    // set the value reval to 0
    int reval = SUCCESS;

    // test opening file for reading, if fail...
    if ((fptr = fopen(filename, "r")) == NULL)
    {
        printf("Cannot open %s.\n", filename);

        // reval = FAIL; //reset reval to 1
    }

    // if successful do...
    else
    {
        printf("Opening the %s file successfully\n", filename);

        // the program will display the address where the file pointer points to..
        printf("The value of fptr: 0x%p\n", fptr);
        printf("\n....file processing should be done here....\n");
        printf("\nReady to close the %s file.\n", filename);

        // close the file stream...
        if (fclose(fptr) == 0)
            printf("Closing the %s file successfully\n", filename);
    }

    system("pause");
    return reval;
}
