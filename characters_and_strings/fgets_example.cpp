#include <stdio.h>

#define BUFFER 100

int main(){
	char name[BUFFER];
	// scanf(); // is NOT SAFE for strings
	printf("Who are you? ");
	fgets(name, BUFFER, stdin);
	printf("Hello %s!", name);	
	return 0;
}
