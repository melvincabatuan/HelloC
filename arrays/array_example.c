#include <stdio.h>

/*
  NOTE: THIS is just an example.
*/

int main()
{
  int numbers[] = {10, 20, 30, 40, 50}; // Declare & Initialize
  printf("BEFORE:\n");
  // Note: It is bad to repeat!!! (Loop instead)
  printf("%d\n", numbers[0]);
  printf("%d\n", numbers[1]);
  printf("%d\n", numbers[2]);
  printf("%d\n", numbers[3]);
  printf("%d\n", numbers[4]);
  numbers[4] = 100; // assign 100 to last array element
  printf("\nAFTER:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", numbers[i]);
  }

  // Another way of creating an array
  char vowels[5];  // Declare
  vowels[0] = 'a'; // assign value
  vowels[1] = 'e';
  vowels[2] = 'i';
  vowels[3] = 'o';
  vowels[4] = 'u';

  // Display
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    printf("\n%c", vowels[i]);
  }
  return 0;
}