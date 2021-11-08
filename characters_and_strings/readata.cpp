// Function to determine if two strings are equal
#include <stdio.h>
#include <string.h>
//reading lines of data
#include<stdlib.h>
#include <stdbool.h>

int main (void)
{
int i;
char line[81];
void readLine (char buffer[]);
for ( i = 0; i < 3; ++i )
{
readLine (line);
printf ("%s\n\n", line);
}

 system("pause");
 return 0;
 }
// Function to read a line of text from the terminal
void readLine (char buffer[])
{
char character;
int i = 0;
do
{
character = getchar ();
buffer[i] = character;
++i;
}
while ( character != '\n' );
buffer[i - 1] = '\0';
}

