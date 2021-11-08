#include <stdio.h>
#include <stdlib.h>

int main() {

	puts("Memory Size: ");
 
	printf("char :           %lu  byte\n", sizeof(char));
	printf("unsigned char :  %lu  bytes\n", sizeof(unsigned char));
	printf("signed char :    %lu  bytes \n", sizeof(signed char));
	printf("int :            %lu  bytes \n", sizeof(int));
	printf("unsigned int :   %lu  bytes \n", sizeof(unsigned int));
	printf("short :          %lu  bytes \n", sizeof(short));
	printf("unsigned short : %lu  bytes \n", sizeof(unsigned short));
	printf("long :           %lu  bytes \n", sizeof(long));
	printf("unsigned long :  %lu  bytes \n", sizeof(unsigned long));

	printf("void :           %lu  byte\n", sizeof(void));
	return 0;
}

/*
$ gcc MemorySize.c -o MemorySize
$ ./MemorySize
Memory Size: 
char :           1  byte
unsigned char :  1  bytes
signed char :    1  bytes 
int :            4  bytes 
unsigned int :   4  bytes 
short :          2  bytes 
unsigned short : 2  bytes 
long :           4  bytes 
unsigned long :  4  bytes 
void :           1  byte

*/

