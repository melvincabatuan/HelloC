#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

int main()
{
    // char name[] = "Jose Protasio Rizal Mercado y Alonso Realonda";
    char name[BUFFER_SIZE], address[BUFFER_SIZE];

    // Method 1: scanf
    printf("Enter your full name: ");
    scanf("%[^\n]%*c", &name);
    printf("\nHello %s!", name);
    printf("\nThe string length is %d!", strlen(name));

    // Method 2: fgets
    printf("Enter your address: ");
    fgets(address, BUFFER_SIZE, stdin); // stdin means console/terminal
    address[strlen(address) - 1] = '\0';
    printf("\nYou live in %s!!!", address);
    return 0;
}