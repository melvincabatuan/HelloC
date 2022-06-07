#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10
#define DUMMY_PASSWORD "ABCD1234"

int main()
{
    char buffer[BUFFER_SIZE];

    printf("\nEnter your password: ");

    if (fgets(buffer, BUFFER_SIZE, stdin) == NULL)
        printf("Fail to read the input stream");
    else
        buffer[strlen(buffer) - 1] = '\0';

    if (strcmp(buffer, DUMMY_PASSWORD) == 0)
        puts("Welcome to the system!!!");
    else
        puts("Intruder detected!");

    return 0;
}
