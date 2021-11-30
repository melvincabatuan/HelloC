#include <stdio.h>

 

int main(){

	char greet[] = "Hello!";

	char *ptr = greet;

	while (*ptr != '\0'){
		putchar(*ptr++);
	}

	// printf("value of pX is %x\n", pX);
	// printf("the value of pointed variable is %d", *pX);
	// *pX = 20;
	// printf("value of x is %d\n", x);
	return 0;
}
