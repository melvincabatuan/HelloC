#include <stdio.h>

int main(){
    int level;
    printf("Enter your year level: ");
    scanf("%d", &level);
    switch(level){
        case 1: 
            printf("Frosh\n");
            break;
        case 2:
            printf("Sophomore\n");
            break;
        case 3:
            printf("Junior\n");
            break;
        case 4:
            printf("Senior\n");
            break;
        default:
            printf("Out-of-school!\n");
    }
    return 0;
}