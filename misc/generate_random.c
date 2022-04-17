#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(int, int);

int main()
{
    srand(time(NULL));
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", get_random(1, 10));
    }
    return 0;
}

int get_random(int min, int max)
{
    return (min + rand() % (max - min));
}
