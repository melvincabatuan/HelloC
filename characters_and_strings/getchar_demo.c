#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 81

int main()
{
   char message[BUFFER_SIZE], c; /* enough storage for a complete line */
   printf("Enter a sentence:\n");
   int i = 0;
   while (i < 81 && (c = getchar()) != '\n')
   {
      message[i] = c; /* store the character entered */
      ++i;
   }
   message[i] = '\0'; /* terminate the string */
   printf("The sentence just entered is:\n");
   puts(message);
   system("pause");
   return 0;
}
