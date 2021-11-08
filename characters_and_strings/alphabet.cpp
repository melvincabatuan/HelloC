#include <stdio.h>

int main() {
  char chr;
  printf("\n");
  for (chr = 'A'; chr <= 'Z'; chr = chr + 1) {
    printf("%c ", chr);
  }
  return 0;
}
