#include <stdio.h>
#include <stdlib.h>

int pow(int a, int n)
{
	if (n == 0)
		return 1;
	else
		return (a * pow(a, n - 1));
}

int main()
{
	int a = 2;
	printf("f(%d, 1) = %d\n", a, pow(a, 1));
	printf("f(%d, 2) = %d\n", a, pow(a, 2));
	printf("f(%d, 3) = %d\n", a, pow(a, 3));
	printf("f(%d, 4) = %d\n", a, pow(a, 4));
	system("pause");
	return 0;
}
