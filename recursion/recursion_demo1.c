#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
	if (n == 0)
		return 3;
	else
		return (2 * f(n - 1) + 3);
}

int main()
{
	printf("f(1) = %d\n", f(1));
	printf("f(2) = %d\n", f(2));
	printf("f(3) = %d\n", f(3));
	printf("f(4) = %d\n", f(4));
	system("pause");
	return 0;
}
