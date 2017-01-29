#include <stdio.h>
#include <stdlib.h>

float fahr2celsius(float f) {
	return ((5.0/9.0) * (f - 32.0));
}

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;
	puts("F          C");
	while (fahr <= upper) {
		celsius = fahr2celsius(fahr);
		printf("%5.2f\t%5.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
	system("pause");
	return 0;
}
