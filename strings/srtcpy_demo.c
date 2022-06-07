#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

int main()
{
    char firstName[BUFFER_SIZE], surname[BUFFER_SIZE];
    // firstName = "Juan"; // Note: assignment with array type is an ERROR
    strcpy(firstName, "Juan");
    strcpy(surname, "Dela Cruz");

    // Display the strings
    puts(firstName);
    puts(surname);

    return 0;
}
