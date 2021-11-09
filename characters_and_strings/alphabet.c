#include <stdio.h>

int main()
{
  char chr;
  printf("\n");

  chr = 'a';
  char encoded = 'a' + ((chr + 3) - 'a') % 26;
  printf("encode char = %c", encoded); 

  // for (chr = 'a'; chr <= 'z'; chr = chr + 1)
  // {
  //   printf("%c ", chr);
  // }
  // for (chr = 'A'; chr <= 'Z'; chr = chr + 1) {
  //   printf("%c ", chr);
  // }
  return 0;
}
