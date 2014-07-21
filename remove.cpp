//PROGRAM THAT WILL REMOVE ALL CONSONANTS IN AN INPUTTED SENTENCE.

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
 const int size=256;
 int i,j;
 char sentence[size];

 printf("\n Type the sentence: ");
 gets(sentence);

 for(i=0,j=0;i<strlen(sentence);i++)
  {
   switch(sentence[i])
    {
     case 'b' : case 'B' : case 'c' : case 'C' : case 'd' : case 'D' :
     case 'f' : case 'F' : case 'g' : case 'G' : case 'h' : case 'H' :
     case 'j' : case 'J' : case 'k' : case 'K' : case 'l' : case 'L' :
     case 'm' : case 'M' : case 'n' : case 'N' : case 'p' : case 'P' :
     case 'q' : case 'Q' : case 'r' : case 'R' : case 's' : case 'S' :
     case 't' : case 'T' : case 'v' : case 'V' : case 'w' : case 'W' :
     case 'x' : case 'X' : case 'y' : case 'Y' : case 'z' : case 'Z' : 
     break;
     default : sentence[j]=sentence[i]; j++; 
     break;
    }
  }
 printf("\n Removing all consonants we have: ");
 
 for(i=0;i<j;i++)
  {
   printf("%c",sentence[i]);
  }
  printf("\n");
  
system("pause");
return 0;
}

