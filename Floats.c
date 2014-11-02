#include <stdio.h>
#include <stdlib.h>

int main() {

	float			f;
	double			d;
	long double		ld;
	 
	printf("unsigned float : %lu  bytes \n", sizeof(float));
	printf("double :         %lu  bytes \n", sizeof(double));
	printf("long double :    %lu  bytes \n", sizeof(long double));

	f = 1.0/9.0;
	d = 1.0/9.0;
	ld = 1.0/9.0;

	puts("\n6 decimal points precision:");
	printf("f      = %1.6f\n", f);
	printf("d      = %1.6lf\n", d);
	printf("ld     = %1.6Lf\n", ld);

	puts("\n10 decimal points precision:");
	printf("f      = %1.10f\n", f);
	printf("d      = %1.10f\n", d);
	printf("ld     = %1.10Lf\n", ld);

        puts("\n15 decimal points precision:");
	printf("f      = %1.15f\n", f);
	printf("d      = %1.15lf\n", d);
	printf("ld     = %1.15Lf\n", ld);

        puts("\n19 decimal points precision:");
	printf("f      = %1.19f\n", f);
	printf("d      = %1.19lf\n", d);
	printf("ld     = %1.19Lf\n", ld);

	puts("\n30 decimal points precision:");
	printf("f      = %1.30f\n", f);
	printf("d      = %1.50lf\n", d);
	printf("ld     = %1.50Lf\n", ld);
	return 0;
}

/*
$ gcc Floats.c -o Floats
$./Floats
unsigned float : 4  bytes 
double :         8  bytes 
long double :    12  bytes 

6 decimal points precision:
f      = 0.111111
d      = 0.111111
ld     = 0.111111

10 decimal points precision:
f      = 0.1111111119
d      = 0.1111111111
ld     = 0.1111111111

15 decimal points precision:
f      = 0.111111111938953
d      = 0.111111111111111
ld     = 0.111111111111111

19 decimal points precision:
f      = 0.1111111119389533997
d      = 0.1111111111111111049
ld     = 0.1111111111111111049

30 decimal points precision:
f      = 0.111111111938953399658203125000
d      = 0.11111111111111110494320541874913033097982406616211
ld     = 0.11111111111111110494320541874913033097982406616211
// For some strange reason, double and long double have same response in my machine
*/
