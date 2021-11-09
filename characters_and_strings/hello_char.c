#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define BUFFER_SIZE 100

int main(){

    char greet[BUFFER_SIZE];
    printf("\nEnter a string: ");
    fgets(greet, BUFFER_SIZE, stdin);
    // fgets will give you the newline char at the end

    if(greet[strlen(greet) - 1] == '\n'){
        puts("There is a new line char at end.");
    } else {
        puts("You're lying!");
    }

    // This will replace the new line with null char 
    greet[4] = '\0';

    printf("The STRING IS : %s\n", greet);
    // char greet[] = "Hello World!!!"; // string in C
    printf("The length of this string is %d.", strlen(greet));

    // char new_greet[BUFFER_SIZE];
    // strcpy(new_greet, greet);
    // printf("The copied string is : %s", new_greet);

    // int letter_count = 0;
    // int punct_count = 0;
    // int i = 0;
    // while (greet[i] != '\0'){
    //     printf("%c", toupper(greet[i]));
    //     new_greet[i] = greet[i];
    //     if (isalpha(greet[i])){
    //         ++letter_count;
    //     }
    //     if (ispunct(greet[i])){
    //         ++punct_count;
    //     }
    //     ++i;
    // }
    // new_greet[i] = '\0';

    // printf("Old greet : %s\n", greet);
    // printf("New greet : %s", new_greet);

    // printf("\nThe number of letters is %d.", letter_count);
    // printf("\nThe number of punct symbol is %d.", punct_count);

    // printf("%c\n", greet[0]);
    // printf("%c\n", greet[1]);
    // printf("%c\n", greet[2]);
    // printf("%c\n", greet[3]);
    // printf("%c\n", greet[4]);
    // if (greet[5] == '\0')
    //     puts("It is a null char!!!");
    // else
    //     puts("You're lying.");
    return 0;
}