#include <stdio.h>
#define FILENAME "text_testing.txt"

int main()
{

	// A. Writing in a file

	// 1. Declare a file pointer
	FILE *fp;

	// 2. Open the file : "w" write mode
	fp = fopen(FILENAME, "w");

	// 3. Write a text to file
	fprintf(fp, "%s", "Hello De La Salle University!");

	// 4. Close the file
	fclose(fp);
    // =======================================================
	// A. Reading in a file

	// 1. Declaring a file pointer
	FILE *fpr;

	// 2. Open the file w/ fopen: "r" mode for reading
	fpr = fopen(FILENAME, "r");

	// Feedback for file problems:
	if (fpr == NULL)
	{
		printf("I can't open your file: %s", FILENAME);
		return -1;
	}

	// 3. Display the content
	printf("The content of the file is: \n");
	char c;
	while ((c = fgetc(fpr)) != EOF)
	{
		putchar(c);
		// printf("%c", c);
	}

	// 4. Close the file
	fclose(fpr);

	return 0;
}