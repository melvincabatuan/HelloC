/* 
$ gcc ArrayPointerAccess.c -o ArrayPointerAccess
$ ./ArrayPointerAccess 
Before the change, str contains: God shall bless us; and all the ends of the earth shall fear him.
Before the change, str[56] contains: f
Before the change, str[56] contains: e
Before the change, str[56] contains: a
Before the change, str[56] contains: r
After the change, str[56] contains: L
After the change, str[56] contains: O
After the change, str[56] contains: V
After the change, str[56] contains: E
After the change, str contains: God shall bless us; and all the ends of the earth shall LOVE him.
Before the change, list[2] contains: 3
After the change, list[2] contains: -3
After the change, list contains: 
1 2 -3 4 5 6 7 8 9
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  int i;
 
  char str[] = "God shall bless us; and all the ends of the earth shall fear him.";
  char *ptr_str = str;

  int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *ptr_int = list;
 
  printf("Before the change, str contains: %s\n", str);
  printf("Before the change, str[56] contains: %c\n", str[56]);
  *(ptr_str + 56) = 'L';
  printf("Before the change, str[56] contains: %c\n", str[57]);
  *(ptr_str + 57) = 'O';
   printf("Before the change, str[56] contains: %c\n", str[58]);
  *(ptr_str + 58) = 'V';
   printf("Before the change, str[56] contains: %c\n", str[59]);
  *(ptr_str + 59) = 'E';
  printf("After the change, str[56] contains: %c\n", str[56]);
  printf("After the change, str[56] contains: %c\n", str[57]);
  printf("After the change, str[56] contains: %c\n", str[58]);
  printf("After the change, str[56] contains: %c\n", str[59]);

  printf("After the change, str contains: %s\n", str); 
 
  printf("Before the change, list[2] contains: %d\n", list[2]);
  *(ptr_int + 2) = -3;
  printf("After the change, list[2] contains: %d\n", list[2]);
  printf("After the change, list contains: \n");
  for (i = 0; i<9; i++)
     printf("%d ", list[i]);
  printf("\n");
  exit(0);
 }
