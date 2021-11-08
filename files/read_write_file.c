//Reading and writing one block at a time 
 #include <stdio.h> 
#include <stdlib.h> 
 
 //declare enum data type, you will this 
 //learn in other module... 
 enum {SUCCESS, FAIL, MAX_LEN = 80}; 
 
//function prototype for block reading and writing 
void BlockReadWrite(FILE *fin, FILE *fout); 
 //function prototype for error messages... 
 int ErrorMsg(char *str); 
 
 int main(void) 
 { 
 FILE *fptr1, *fptr2; 
 //define the filenames... 
 //the files location is at c:\Temp 
 char filename1[] = "c:\\testfive.txt";
 char filename2[] = "c:\\testsix.txt"; 
int reval = SUCCESS; 
 
 //test opening testfive.txt file for writing, if fail... 
 if((fptr1 = fopen(filename1, "w")) == NULL) 
 { 
 reval = ErrorMsg(filename1); 
} 
 //test opening testsix.txt file for reading, if fail... 
 else if ((fptr2 = fopen(filename2, "r")) == NULL) 
 { 
 reval = ErrorMsg(filename2); 
 } 
 //if opening files for writing and reading is successful, do... 
else 
{ 
 //call function for reading and writing 
 BlockReadWrite(fptr2, fptr1); 
 //close both files streams... 
 if(fclose(fptr1)==0) 
 printf("%s successfully closed\n", filename1); 
 if(fclose(fptr2)==0) 
 printf("%s successfully closed\n", filename2); 
 } 
 printf("\n"); 
 //for Borland... 
 system("pause"); 
 return reval; 
 } 
 //function definition for block read, write 
 void BlockReadWrite(FILE *fin, FILE *fout) 
{ 
 int num; 
 char buff[MAX_LEN + 1]; 
 //while not end of file for input file, do... 
 while(!feof(fin)) 
 { 
 //reading... 
 num = fread(buff, sizeof(char), MAX_LEN, fin); 
 //append a null character 
buff[num * sizeof(char)] = '\0'; 
printf("%s", buff); 
 //writing... 
 fwrite(buff, sizeof(char), num, fout); 
 } 
 } 
 
//function definition for error message 
 int ErrorMsg(char *str) 
 { 
 //display the error message... 
 printf("Problem, cannot open %s.\n", str); 
 return FAIL; 
 } 
 
