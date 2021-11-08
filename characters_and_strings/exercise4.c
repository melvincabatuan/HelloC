#include <stdio.h>
#include <stdlib.h>

char to_upper(char); /* function prototype */

main()
{
   char strng[8l];
   int i = 0;

   printf("Enter a line of text\n");
   gets(strng);

   while (strng[i] != '\0') /* get the character */
   {
      strng[i] = to_upper(strng[i]); /* send it to the function */
      ++i;                           /* move to next character */
   }
   printf("The string, with all lower case letters converted is:\n");
   puts(strng);
   system("pause");
}

char to_upper(char ch)
{
   if (ch >= 'a' && ch < 'z')
      return (ch - 'a' + 'A');
   else
      return (ch);
}
