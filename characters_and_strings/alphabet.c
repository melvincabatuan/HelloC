#include <stdio.h>

int main()
{


  for (char chr = 'A'; chr <= 'Z'; chr++)
  {
    printf("%c ", chr);
  }









  // for (chr = 'A'; chr <= 'Z'; chr = chr + 1) {
  //   printf("%c ", chr);
  // }

  // Encoding demo - lab1 ex2 example:
  // char chr = 'a';
  // char encoded = 'a' + ((chr + 3) - 'a') % 26;
  // printf("encode char = %c", encoded);
  return 0;
}
