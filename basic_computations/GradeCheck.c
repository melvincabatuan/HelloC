#include <stdio.h>
#include <stdlib.h>

int main()
{
	float M1, M2, M3, M4, GRADE;
	printf("Enter 4 integers: ");
	scanf("%f %f %f %f", &M1, &M2, &M3, &M4);
	GRADE = (M1 + M2 + M3 + M4) / 4.0;
	if (GRADE < 70)
		printf("FAIL\n");
	else
		printf("PASS\n");
	system("pause");
	return 0;
}
