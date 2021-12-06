#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char input[3];    
	int value = 0;
	
	printf(">> ");
	scanf("%2s", input);
	
	if (input[0] == 'J'){
		value = 10;
	}
	else if (input[0] == 'Q'){
		value = 10;
	}
	else if (input[0] == 'K'){
		value = 10;
	}
	else if (input[0] == 'A'){
		value = 11;
	}
	else {
		value = atoi(input);
		if (value > 10 || value < 2){
			puts("INVALID Output!!!");
			return 0;
		}
	}	
	
	 
	printf("Value of card = %d", value);
	
	return 0;
}
