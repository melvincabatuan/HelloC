#include <stdlib.h>
#include <stdio.h>
#include <math.h>

const static int MONEY[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 1 };

int greedy_change(int inserted, int loaded) {
	int num = 0;
	int change = inserted - loaded;
	for (int i = 0; i <= 8; ++i) {
		num = num + change / MONEY[i];
		change = change % MONEY[i];
	}
	return num;
}

int main()
{
	int inserted, loaded;
	puts("Enter the amount of inserted money");
	scanf("%d", &inserted);
	puts("Enter the amount to be loaded");
	scanf("%d", &loaded);
	printf("The minimal number of bills/coins in the change is %d.\n", greedy_change(inserted, loaded));
	system("pause");
	return 0;
}
