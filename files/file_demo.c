#include <stdio.h>
#define FILENAME "output.txt"

int main(){
	// Reading in a file
	FILE *fp; // declaring a file pointer
	fp = fopen(FILENAME, "r");
	printf("The content of the file is: \n"); 
	char c;
	while ((c = fgetc(fp)) != EOF) 
	{ 
		putchar(c);
		// printf("%c", c);
	}


	// Writing in a file
	// FILE *fp; // declaring a file pointer
	// fp = fopen(FILENAME, "w"); // opening of
	// fprintf(fp, "%s","Hello De La Salle University!");
	fclose(fp); // Do not forget to close the file after using
	return 0;
}
