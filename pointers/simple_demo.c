#include <stdio.h>

int main(){
    char a = 'X';
    // printf("%d\n", &a);
    char *ptr = &a; // initialize the pointer to POINT TO a
    printf("%c\n", *ptr); // dereferencing the pointer
    *ptr = 'A'; // a pointer can change the original variable
    printf("%c\n", a); 
    return 0;
}