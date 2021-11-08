//Pointer illustration 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *numAddr;
    int miles, dist;
    
    dist = 158;
    miles = 22;
    
    numAddr = &miles;
    printf("The address stored in numAddr is %p\n",numAddr);
    printf("The value pointed to by numAddr is %d\n",*numAddr);
    
    numAddr = &dist;
    printf("\nThe address now stored in numAddr is %p\n",numAddr);
    printf("The value now pointed to by numAddr is %d\n",*numAddr);
    
system("pause");
return 0;
}
