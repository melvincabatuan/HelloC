/*
This program explores special characters '\n' new line and '\t' tab.
Written by:
Date written:
Last modified:
*/

#include <stdio.h>
#include <stdlib.h>

#define TAB 8

int main()
{
	int input;
	int counter = 0;
	int spaces;
	while ((input = getchar()) != EOF)
	{
		if (input == '\n')
		{
			putchar(input);
			counter = 0;
		}
		else if (input == '\t')
		{
			spaces = TAB - counter % TAB;
			while (spaces-- != 0)
			{
				putchar('#');
				counter++;
			}
		}
		else
		{
			putchar(input);
			counter++;
		}
	}
	system("pause");
	return 0;
}
