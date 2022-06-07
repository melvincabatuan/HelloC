#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char name[SIZE], course[SIZE];

    // String input method 1: 
    printf("Enter your name: ");
    scanf("%[^\n]%*c", &name); // includes spaces
    /* The [] is the scanset character.
    [^\n] tells that while the input is not a newline ('\n') take input.
    Then with the %*c it reads the newline character from the input buffer
    (which is not read), and the * indicates that this read in input is
    discarded (assignment suppression)*/
    printf("Hello %s!", name);

    // String input method 2:
    printf("Enter your course: ");
    fgets(course, SIZE, stdin); // name is the char array, SIZE - buffer length,
    // stdin is terminal
    course[strlen(course) - 1] = '\0';
    printf("Your course is %s!!!", course);
    return 0;
}