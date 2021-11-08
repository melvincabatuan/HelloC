#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 100 /* maximum input line length */

int getline(char line[], int maxline);
void reverse(char src[]);

int main()
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */
	
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > 1) {
			reverse(line);
			printf("%s", line);
		}
	}
	system("pause");
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char src[]) {
	int i = 0;
	while (src[i] != '\0')
		++i;
	--i;
	if (src[i] == '\n') {
		src[i] = '\0';
		--i;
	}
	int temp;
	for (int j = 0; j < i; ++j, --i) {
		temp = src[j];
		src[j] = src[i];
		src[i] = temp;
	}
}
