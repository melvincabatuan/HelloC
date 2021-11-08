//PROGRAM THAT WILL DETERMINE THE LOCATION(S) OF A CERTAIN WORD IN AN INPUTTED SENTENCE.
#include<iomanip.h>
#include<string.h>
#include<stdio.h>


int main()
{
const int size=256;
int i,j;
char string[size],word[10];

printf("\n Input sentence: ");
gets(string);
printf("\n Word to search: ");
gets(word);
           
    for(i=0,j=0;i<=strlen(string);i++){
                                        
    switch(strlen(word)){
                         
     case 1 : if((string[i-1]==' '||i==0)&&string[i]==word[j])
	      cout<<"\n AT "<<i; break;
     case 2 : if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1])
	      cout<<"\n AT "<<i; break;
     case 3 : if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1]&&string[i+2]==word[j+2])
	      cout<<"\n AT "<<i; break;
     case 4 : if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1]&&string[i+2]==word[j+2]&&string[i+3]==word[j+3])
	      cout<<"\n AT "<<i; break;
     case 5 : if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1]&&string[i+2]==word[j+2]&&string[i+3]==word[j+3]&&string[i+4]==word[j+4])
	      cout<<"\n AT "<<i; break;
     case 6 : if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1]&&string[i+2]==word[j+2]&&string[i+3]==word[j+3]&&string[i+4]==word[j+4]&&string[i+5]==word[j+5])
	      cout<<"\n AT "<<i; break;
     case 7 : if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1]&&string[i+2]==word[j+2]&&string[i+3]==word[j+3]&&string[i+4]==word[j+4]&&string[i+5]==word[j+5]&&string[i+6]==word[j+6])
	      cout<<"\n AT "<<i; break;
     case 8 : if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1]&&string[i+2]==word[j+2]&&string[i+3]==word[j+3]&&string[i+4]==word[j+4]&&string[i+5]==word[j+5]&&string[i+6]==word[j+6]&&string[i+7]==word[j+7])
	      cout<<"\n AT "<<i; break;
     case 9 : if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1]&&string[i+2]==word[j+2]&&string[i+3]==word[j+3]&&string[i+4]==word[j+4]&&string[i+5]==word[j+5]&&string[i+6]==word[j+6]&&string[i+7]==word[j+7]&&string[i+8]==word[j+8])
	      cout<<"\n AT "<<i; break;
     case 10 :if((string[i-1]==' '||i==0)&&string[i]==word[j]&&string[i+1]==word[j+1]&&string[i+2]==word[j+2]&&string[i+3]==word[j+3]&&string[i+4]==word[j+4]&&string[i+5]==word[j+5]&&string[i+6]==word[j+6]&&string[i+7]==word[j+7]&&string[i+8]==word[j+8]&&string[i+9]==word[j+9])
	      cout<<"\n AT "<<i; break;
    }
}
system("pause");
return 0;
}
