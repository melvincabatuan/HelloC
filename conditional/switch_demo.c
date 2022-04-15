#include <stdio.h>

int main()
{
	int choice;
	printf("Input the your choice: \n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("Polynomial\n");
		break;
	case 2:
		printf("Statistics\n");
		break;
	default:
		printf("INVALID\n");
	}
	return 0;
}
