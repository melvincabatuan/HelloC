#include <stdio.h>
#include <string.h>  // needed by strlen()

int main(){
    // char greet[] = "Hello"; // not equal with {'H', 'e', 'l', 'l', 'o'}
    // printf("%s", greet);
    // printf("\nThe length is %d.", strlen(greet));

    // char greet[];  // ERROR: you need the actual memory allocated
    char greet[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s", greet);
    printf("\n%c", greet[0]);
    greet[0] = 'Z';
    printf("\n%s", greet);
    return 0;
}