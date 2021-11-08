	//Reading and writing one character at a time 
	#include <stdio.h> 
	#include <stdlib.h> 
	
	//enumerated data type, SUCCESS = 0, FAIL = 1 
	enum {SUCCESS, FAIL}; 
	
	//prototype function for reading from and writing... 
	void CharReadWrite(FILE *fin, FILE *fout); 
	
	int main() 
	{ 
	//declare two file pointers... 
	FILE *fptr1, *fptr2; 
	
	//define the two files name... 
	char filename1[] = "C://testone.txt"; 
	char filename2[] = "C://testtwo.txt"; 
	int reval = SUCCESS; 
	
	//test the opening filename1 for writing.... if fails.... 
	if ((fptr1 = fopen(filename1, "w")) == NULL) 
	{ 
	printf("Problem, cannot open %s.\n", filename1); 
	reval = FAIL; 
	} 
	
	//if opening filename1 for writing is successful,
	//test for opening for reading filename2, if fails... 
	else if ((fptr2 = fopen(filename2, "r")) == NULL) 
	{ 
	printf("Problem, cannot open %s.\n", filename2); 
	reval = FAIL; 
	} 
	
	//if successful opening for reading from filename2 
	//and writing to filename1... 
	else 
	{ 
	
	//function call for reading and writing... 
	CharReadWrite(fptr2, fptr1); 
	
	//close both files... 
	if(fclose(fptr1)==0) 
	printf("%s closed successfully\n", filename1); 
	if(fclose(fptr2)==0) 
	printf("%s closed successfully\n", filename2); 
	} 
	//For Borland if compiled using its IDE… 
	system("pause"); 
	return reval; 
	} 
	
	//read write function definition 
	void CharReadWrite(FILE *fin, FILE *fout) 
	{ 
	int c; 
	
	//if the end of file is reached, do... 
	while ((c = fgetc(fin)) != EOF) 
	{ 
	
	//write to a file... 
	fputc(c, fout); 
	
	//display on the screen... 
	putchar(c); 
	} 
	printf("\n"); 
	} 
