#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char text[] = "The1 quick2 brown3 fox4 jumps5 over6 a7 lazy8 dog9 10.";
    int i = 0, count = 0;
    while(i < strlen(text)){
        // a to z or A to Z or 0 to 9
        char c = text[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            count++;

        // if (isalnum(text[i]))
        //     count++;
        i++;
    }
    printf("The number of alphanumeric characters are %d", count);
    return 0;
}