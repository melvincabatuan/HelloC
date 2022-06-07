#include <stdio.h>
#include <string.h> // needed by strlen()

#define BUFFER_SIZE 100

int main()
{
    char name[BUFFER_SIZE], address[BUFFER_SIZE];
    // Method 1: Using scanf
    printf("What is your name: ");
    scanf("%[^\n]%*c", name);
    printf("Where do you live: ");

    // Method 2: Using fgets
    fgets(address, BUFFER_SIZE, stdin); // includes the new line character '\n' at the end
    printf("\nYou are %s.\n", name);

    // Display
    printf("\nYou live in %s...", address);

    // Note: If you do not what to include the trailing new line from fgets,
    // then you may replace it with the null '\0' character. e.g.
    // address[strlen(address) - 1] = '\0';
    // printf("You live in %s...", address);

    return 0;
}