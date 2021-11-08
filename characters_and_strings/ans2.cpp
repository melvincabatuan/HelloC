#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[30];
    char street[30];
    char city[30];
    
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("\nstreet : ");
    scanf("%s",&street);
    printf("\ncity zip code: ");
    scanf("%s",&city);
 
system("pause");
return 0;
}
