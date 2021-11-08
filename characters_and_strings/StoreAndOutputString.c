#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
	int i = 0, lim = MAX;
	char input, s[MAX];
	while (i < lim-1) {
		input = getchar();
		if (input == EOF) break;
		if (input == '\n') break;
		s[i++] = input;
	}
	s[i] = '\0';
	printf("%s\n", s);
	system("pause");
	return 0;
}
