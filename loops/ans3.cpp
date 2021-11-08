#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x;
    float pi = 3.1416;
    printf("Degrees        Radians\n");
    
    for(x=0; x<=360; x+=90){   
    
       printf("%3i             %1.4f\n", x, x/(180/pi));
    }
 
system("pause");
return 0;
}
