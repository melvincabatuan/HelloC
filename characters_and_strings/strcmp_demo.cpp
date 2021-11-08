#include <stdio.h>
#include <string.h>
int main()
{
	char password[]="1234";
	char input[15];
	int match;
	printf("Password: ");
	scanf("%s",input);
	match=strcmp(input,password);
	if(match==0)
	puts("Password accepted");
	else
	puts("Invalid password. Alert the authorities.");
	return(0);
}
