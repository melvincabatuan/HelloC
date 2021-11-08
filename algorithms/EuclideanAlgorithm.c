#include <stdlib.h>
#include <stdio.h>

int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	printf("The gcd(5,3) = %d.\n", gcd(5,3));
	system("pause");
	return 0;
}
