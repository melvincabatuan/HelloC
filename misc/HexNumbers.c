/*
$ gcc HexNumbers.c -o HexNumbers
PhD:~/HelloC$ ./HexNumbers
Hex(UC) Hex(LC) Decimal
0  	 0 	   0
1  	 1 	   1
2  	 2 	   2
3  	 3 	   3
4  	 4 	   4
5  	 5 	   5
6  	 6 	   6
7  	 7 	   7
8  	 8 	   8
9  	 9 	   9
A  	 a 	   10
B  	 b 	   11
C  	 c 	   12
D  	 d 	   13
E  	 e 	   14
F  	 f 	   15
10  	 10 	   16
11  	 11 	   17
12  	 12 	   18
13  	 13 	   19
14  	 14 	   20
*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
  printf("Hex(UC) Hex(LC) Decimal\n");
  for (int i = 0; i < 21; i++)
    printf("%X  \t %x \t   %d\n", i, i, i);
  exit(0);
}
