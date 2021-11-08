//Reading and writing one line at a time 
 #include <stdio.h> 
 #include <stdlib.h> 
 
 enum {SUCCESS, FAIL, MAX_LEN = 100}; 
 //function prototype for read and writes by line... 
 void LineReadWrite(FILE *fin, FILE *fout); 
 
int main(void) 
 { 
 FILE *fptr1, *fptr2; 
 //file testhree.txt is located at the root, c: 
 //you can put this file at any location provided 
 //you provide the full path, same for testfour.txt 
 char filename1[] = "c://testhree.txt"; 
 char filename2[] = "c://testfour.txt"; 
 char reval = SUCCESS; 
 
 //test opening testhree.txt file for writing, if fail... 
 if((fptr1 = fopen(filename1,"w")) == NULL) 
 { 
 printf("Problem, cannot open %s for writing.\n", filename1); 
 reval = FAIL; 
 } 
 
 //test opening testfour.txt file for reading, if fail... 
 else if((fptr2=fopen(filename2, "r"))==NULL) 
 { 
 printf("Problem, cannot open %s for reading.\n", filename2); 
 reval = FAIL; 
 } 
 
 //if opening fro writing and reading successful, do... 
 else 
 { 
//function call for read and write, line by line... 
 LineReadWrite(fptr2, fptr1); 
 //close both files stream... 
 if(fclose(fptr1)==0) 
 printf("%s successfully closed.\n", filename1); 
 if(fclose(fptr2)==0) 
 printf("%s successfully closed.\n", filename2); 
 } 
 //For Borland screenshot 
 system("pause"); 
 return reval; 
 } 
 
 //function definition for line read, write… 
 void LineReadWrite(FILE *fin, FILE *fout) 
 { 
 //local variable... 
 char buff[MAX_LEN]; 
 while(fgets(buff, MAX_LEN, fin) !=NULL) 
 { 
 //write to file... 
 fputs(buff, fout); 
 //write to screen.. 
printf("%s", buff); 
 } 
 }
