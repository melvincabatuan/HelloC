#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

	int counter = 0;
 
        while(true){
          puts("I love programming!");
          counter++;
          if (counter >= 10) break;        
        }
	return EXIT_SUCCESS;
}

/*
$ gcc Booleans.c -o Booleans
$ ./Booleans 
I love programming!
I love programming!
I love programming!
I love programming!
I love programming!
I love programming!
I love programming!
I love programming!
I love programming!
I love programming!
*/
