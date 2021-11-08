#include <stdio.h>

int main()
{
	char sample[] = "Hello, World!\n";
	int index = 0;
	while(sample[index] != '\0')
	{
		putchar(sample[index]);
		index++;
	}
	return(0);
}
