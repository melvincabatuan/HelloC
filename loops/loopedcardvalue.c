#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char input[3];    
	int value = 0;

	input[0] = '\0';

	
    while (input[0] != 'X'){

	printf("\n>> ");
	scanf("%2s", input);
	switch (input[0]){

	case 'J':
	case 'Q':
	case 'K':
	case 'j':
	case 'q':
	case 'k':
		value = 10;
		break;

	case 'A':
		value = 11;
		break;
		
	case 'X':
		continue;
		
 	default:
		value = atoi(input);
		if (value > 10 || value < 2){
			puts("INVALID Output!!!");
			return 0;
		}
	}	
	 
	printf("Value of card = %d", value);
	
	}
	
	return 0;
}
