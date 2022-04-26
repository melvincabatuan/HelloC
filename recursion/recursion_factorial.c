#include <stdio.h>
#include <stdlib.h>

long long f(long long n)
{
	if (n == 0)
		return 1;
	else
		return (n * f(n - 1));
}

int main()
{
	printf("f(1) = %lld\n", f(1));
	printf("f(2) = %lld\n", f(2));
	printf("f(3) = %lld\n", f(3));
	printf("f(10) = %lld\n", f(10));
	printf("f(20) = %lld\n", f(20));
	return 0;
}
