#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> // MS-DOS system e.g. Windows

int main()
{
    // system("stty -icanon"); // used if mac
    char password[100];
    char username[20];
    int i = 0;

    printf("\nEnter your username: ");
    scanf("%s", username);
 
    printf("Enter your password: ");
    do
    {
        password[i] = getch(); // use getchar() for Mac
        printf("*");
        i++;
    } while (password[i - 1] != '\r');
    password[i - 1] = '\0';

    if (strcmp(username, "abcd") == 0 && strcmp(password, "1234") == 0)
    {

        printf("\nVALID\n");
    }
    else
    {
        puts("\nINVALID\n");
    }
    return 0;
}