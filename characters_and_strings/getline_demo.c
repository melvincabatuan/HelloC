#include <stdio.h>
#include <stdlib.h>

void getline(char[]); /* function prototype */

int main()
{
  char message[81]; /*enough storage for a complete line: */
  int i;

  printf("Enter a string:\n");
  getline(message);

  printf("The string just entered is:\n");
  puts(message);
  system("pause");
}
void getline(char string[])
{
  int i = 0;
  char c;

  while (i < 81 && (c = getchar()) != '\n')
  {
    string[i] = c; /* store the character entered */
    ++i;
  }
  string[i] = '\0';
  return;
}
