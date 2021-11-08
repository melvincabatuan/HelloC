#include <stdio.h>
#include<stdlib.h>
#include <windows.h>

int main()
{

        HANDLE hConsole;
        hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

// Use the three primary colors for mixing any other color.
// Use FOREGROUND_INTENSITY for brighter colors.
        SetConsoleTextAttribute
        (hConsole, FOREGROUND_GREEN| FOREGROUND_INTENSITY);
                        printf("Bright red text\n");

        SetConsoleTextAttribute
        (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                        printf("Bright blue text\n");

        SetConsoleTextAttribute
        (hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_BLUE );
                        printf("Back to normal white text\n");

// Wait for user pressing key before exiting
// Gives them a chance to see the output
                        printf("\n\nPress any key to exit program.....");
                        
system("pause");
                return 0;
}
