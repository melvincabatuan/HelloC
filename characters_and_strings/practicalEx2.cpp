#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( )
{
    char name[30], address[50], zip[30],  course[10];
    
    printf("Enter your name: ");
    gets(name);
    printf("\nAddress : ");
    gets(address);
    printf("\nZip code: ");
    scanf("%s",zip);

    
    printf("You are: %s \n",name);
    printf("You live in: %s, %s \n",address,zip);
system("pause");
return 0;
}
