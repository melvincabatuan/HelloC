//PROGRAM THAT REVERSES THE ORDER OF WORDS IN AN INPUTTED SENTENCE.
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
 const int size=256;
 int i,j,temp,count;
 char sentence[size],rev[size];

 printf("\n Type the sentence: ");
 gets(sentence);
 printf("\n The output is: ");

 for(count=0,i=strlen(sentence);i>=0;i--,count++)
  {
    if(sentence[i]==' ')
     { for(j=0,temp=i;j<=count;temp++,j++)
	{
	  rev[j]=sentence[temp];
	  printf("%c",rev[j]);
	}
      count=0;
     }
    else if(i==0)
     { for(j=0,temp=i;j<=count;temp++,j++)
	{
	  rev[j]=sentence[temp];
	  printf("%c",rev[j]);
	}
       count=0;
     }

     }
 
system("pause");
return 0;
}

