#include <stdio.h>
#include <string.h> // needed by strlen()

int main()
{
    char greet1[] = "Hello";                         // string (null termination)
    char greet2[] = {'H', 'e', 'l', 'l', 'o'};       // plain char array
    char greet3[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // same value as greet1
    char greet4[] = "Hello World!";                  // string

    // 1. String for a literal
    printf("%s\n", greet1);
    // 2. Array
    for (int i = 0; i < 5; i++)
    {
        // putchar(greet2[i]);
        printf("%c", greet2[i]); // "%c" for one character
    }
    // 3. Another string
    printf("\n%s\n", greet3);

    printf("\nThe length of greet1 string is %lu.", strlen(greet1));
    printf("\nThe length of greet2 string is %d.", strlen(greet2));
    printf("\nThe length of greet3 string is %d.", strlen(greet3));
    printf("\nThe length of greet4 string is %d.", strlen(greet4));

    return 0;
}