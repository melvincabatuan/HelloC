// Program to use the dictionary lookup program
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


/***** Insert alphabetic function here *****/
/***** Insert readLine function here *****/
/***** Insert countWords function here *****/
int main (void)
{
char text[81];
int totalWords = 0;
int countWords (const char string[]);
void readLine (char buffer[]);
bool endOfText = false;
printf ("Type in your text.\n");
printf ("When you are done, press 'RETURN'.\n\n");
while ( ! endOfText )
{
readLine (text);
if ( text[0] == '\0' )
endOfText = true;

 system("pause");
 return 0;
 }
