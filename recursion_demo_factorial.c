#include <stdio.h>
#include <stdlib.h>

int f(int n) {
	if (n == 0)
		return 1;
	else
		return (n*f(n-1));
}

int main()
{
	printf("f(1) = %d\n", f(1));
	printf("f(2) = %d\n", f(2));
	printf("f(3) = %d\n", f(3));
	printf("f(4) = %d\n", f(20));
	system("pause");
	return 0;
}
