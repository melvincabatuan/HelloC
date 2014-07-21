#include<stdio.h>
#include<stdlib.h>

int main()
{
 int celsius;
 float fahrenheit;
 
 for(celsius = 5; celsius<=50; celsius+=5){
    fahrenheit = (9.0/5.0) * celsius + 32;

 printf("%2i     %5.02f\n", celsius, fahrenheit);}
    
  system("pause");
  return 0;
}
