#include <stdio.h>
#include <stdlib.h>

const int NUM_OF_CHARS = 128;

int main()
{
	int character[NUM_OF_CHARS] = {0};
	int input;
	while ((input = getchar()) != EOF)
		++character[input];
	for (int i = 0; i < NUM_OF_CHARS; ++i) {
		if (character[i] == 0) continue;
		putchar(i);
		for (int j = 0; j < character[i]; ++j)
			putchar('*');
		putchar('\n');
	}
	system("pause");
	return 0;
}
