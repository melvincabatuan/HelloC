

#include <stdlib.h>
#include <stdio.h>

int main()
{
    char str[80];
    int x, y;
    float z;

    printf("Enter two integers separated by a space:\n");
    scanf("%d %d", &x, &y);
    printf("Enter a floating-point number:\n");
    scanf("%f", &z);
    printf("Enter a string:\n");
    scanf("%s", str); // Note: Anything beyond a space is ignored
    printf("Here are what you've entered:\n");
    printf("%d %d\n%f\n%s\n", x, y, z, str);
    exit(0);
}

/*
$ gcc IODemo.c -o IODemo
$ ./IODemo
Enter two integers separated by a space:
12 34
Enter a floating-point number:
12.34
Enter a string:
Marvelle Frances
Here are what you've entered:
12 34
12.340000
Marvelle
*/