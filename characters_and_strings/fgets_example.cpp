#include <stdio.h>
#include <string.h>

#define BUFFER 10

int main(){
	char name[BUFFER];
	// scanf(); // is NOT SAFE for strings
	printf("Who are you? ");
	fgets(name, BUFFER, stdin);
	printf("Hello %s!!!", name);
	printf("The string length is %d.", strlen(name));

	if (name[strlen(name) - 1] == '\n'){
		name[strlen(name) - 1] = '\0';
	}
	printf("\nThe string length now is %d.", strlen(name));
	printf("\nHi %s!!!", name);











	// if (name[strlen(name) - 1] == '\n'){ // char in last position
	// 	puts("\nThere is a new line char!");
	// 	name[strlen(name) - 1] = '\0'; // replacing new line char with null char!
	// } else {
	// 	puts("\nI'm lying!");
	// }
	// printf("\nHello %s same line !!!!", name);
	return 0;
}
