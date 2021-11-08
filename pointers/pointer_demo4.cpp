#include <stdio.h>
int main()
{
	char a,b,c;
	char *p;
	a = 'A'; b = 'B'; c = 'C';
	printf("Know your ");
	p = &a; /* initialize */
	putchar(*p); /* use */
	p = &b; /* initialize */
	putchar(*p); /* use */
	p = &c; /* initialize */
	putchar(*p); /* use */
	printf("s\n");
	return(0);
}
