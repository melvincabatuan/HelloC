#include<stdio.h>
#include<stdlib.h>

int main( )
{
      char string[81];
      void count_str(char []);              /* function prototype */
      
      printf("Enter a line of text\n");
      gets(string) ;
      count_str(string);
      system("pause");
}

void count_str(char message[])
{
     int i;
     for(i=0; message[i] != '\0'; ++i); /* The semicolon at the end of this 
statement is the null statement*/
     printf("\nThe number of total characters, including blanks,");
     printf("\n the line just entered is %d.\n", i);
     return;
}
