#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	puts("Input a character or Ctrl+z to signal EOF");
	while ((input = getchar()) != EOF)
	{
		printf("The value of getchar() != EOF is %d.\n",
			   (input != EOF));
		getchar();
	}
	printf("The value of getchar() != EOF is %d.\n",
		   (input != EOF));
	system("pause");
	return 0;
}
