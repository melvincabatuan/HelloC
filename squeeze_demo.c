#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void squeeze(char s[], char t[]) {
	int i, j, k;
	for (i = 0; t[i] != '\0'; ++i) {
		for (j = k = 0; s[j] != '\0'; ++j) {
		 	if (s[j] != t[i])
		 		s[k++] = s[j];
		 	s[k] = '\0';
		}
	}
}

int main()
{
	char s[] = "The quick brown fox";
	char t[] = "The";
	squeeze(s, t);
	printf("%s", s);
	system("pause");
	return 0;
}
