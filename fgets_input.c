/*
$ gcc fgets_input.c -o fgets_input
$ ./fgets_input 
Enter a string: Melvin Kong Cabatuan 
This is your string: Melvin Kong Cabatuan
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[80];
  int i;

  printf("Enter a string: ");
  fgets(str, 60, stdin);

  /* remove newline, if present */
  i = strlen(str)-1;
  if( str[ i ] == '\n') 
      str[i] = '\0';

  printf("This is your string: %s\n", str);

  return 0;
}
