#include <stdio.h>

#define BUFFER 100

int input(char str[], int n){
	int ch, i = 0;
	while((ch = getchar()) != '\n'){
		if (i < n)
			str[i++] = ch;
	}
	str[i] = '\0';
	return i;
}

int main(){
	char name[BUFFER];
	printf("Enter your name:\n");
//	scanf("%[^\n]s", name);
	int n = input(name, 10);
	printf("%s % d\n", name, n);
	return 0;
}
