#include <stdio.h>

int main(void)
{
	char c = 1;
	printf("%d %p\n", c, &c);
	int i = 2;
	printf("%d %p\n", i, &i);
	double d = 3.0;
	printf("%lf %p\n", d, &d);
	return 0;
}
