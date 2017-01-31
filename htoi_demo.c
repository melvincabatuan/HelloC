#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

unsigned long htoi(const char s[]) {
	unsigned long val = 0;
	for (int i = 0; s[i] != '\0';++i) {
		int c = tolower(s[i]);
		if (c == '0' && tolower(s[i + 1]) == 'x')
			++i;
		else if (c >= '0' && c <= '9')
			val = 16 * val + (c - '0');
		else if (c >= 'a' && c <= 'f')
			val = 16 * val + (c - 'a' + 10);
	}
	return val;
}

int main()
{
	printf("\t %ld\n", htoi("0XFFFF"));
	system("pause");
	return 0;
}
