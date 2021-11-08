#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int any(char s[], char t[]) {
	int i, j, k, pos = -1;
	for (i = 0; t[i] != '\0'; ++i) {
		for (j = k = 0; s[j] != '\0'; ++j) {
			if (s[j] == t[i]) {
				if (pos == -1)
					pos = i;
				else if (i < pos)
					pos = i;
			}
		}
	}
	return pos;
}

int main()
{
	char s[] = "wfx";
	char t[] = "The quick brown fox";
	printf("position = %d\n", any(s, t));
	system("pause");
	return 0;
}
