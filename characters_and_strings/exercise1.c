#include<stdio.h>
#include<stdlib.h>

void vowels (char []); /* function prototype */
   
int main( )
{
    char line[81];
    printf("Enter a string.\n");
    gets(line);
    vowels(line);
    system("pause");
}

void vowels (char strng[])
{
     int i=0, v=0;           /* Array element number*/
     char c;
          while((c = strng[i++]) != '\0')
                   switch(c)
                   {
                            case 'a':
                            case 'e':
                            case 'i':
                            case '0':
                            case 'u':
                                 putchar(c);
                                 ++v;
                                 }

                                 putchar ('\n ');
                                 printf("There were %d vowels.", v);
                                 return;
}

