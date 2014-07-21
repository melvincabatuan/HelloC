//PROGRAM THAT REVERSES THE ORDER OF LETTERS IN EACH WORD IN AN INPUTTED SENTENCE.
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
 const int size=256;
 int i,j,x,temp,count;
 char sentence[size],rev[size];

 printf("\n Type the sentence: ");
 gets(sentence);
 printf("\n The output is: ");

 for(count=0,x=0;x<=strlen(sentence);x++,count++)
  {
    if(sentence[x]==' ')
     {
      for(i=0,j=x;i<=x/2;i++,j--)
       {
	rev[i]=sentence[j];
	rev[j]=sentence[i];
       }
      for(i=0,j=count;i<=j;i++)
       {
	printf("%c",rev[i]);
       }
      count=0;
     }
 else if(x==(strlen(sentence)))
     {
      for(i=0,j=x;i<=x/2;i++,j--)
       {
	rev[i]=sentence[j];
	rev[j]=sentence[i];
       }
      for(i=0,j=count;i<=j;i++)
       {
	printf("%c",rev[i]);
       }

      count=0;
     }
  }
  printf("\n");
system("pause");
return 0;
}

