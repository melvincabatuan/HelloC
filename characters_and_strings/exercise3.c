#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int write()

{

	FILE *fp;
	char st_name[16], id_number[9];

	fp = fopen("record.txt", "w");
	{
		printf("\nEnter Name: ");
		gets(st_name);
	}

	{
		printf("\nEnter ID Number: ");
		fscanf(stdin, "%s", id_number);
	}
	fprintf(fp, "%s\n%s\n", st_name, id_number);
	fclose(fp);
}

int append()
{

	FILE *fp;

	char st_name[16], id_number[9];
	;

	if ((fp = fopen("record.txt", "r")) == NULL)

	{

		printf("cannot open directory file \n");

		exit(1);
	}

	fp = fopen("record.txt", "a");

	{

		printf("\nEnter Name: ");

		gets(st_name);
	}

	{

		printf("\nEnter ID Number: ");

		fscanf(stdin, "%s", id_number);
	}

	fprintf(fp, "%s\n%s\n", st_name, id_number);

	fclose(fp);
}

int lookup()

{

	FILE *fp;

	char st_name[16], st_name2[16], id_number[9];

	if ((fp = fopen("record.txt", "r")) == NULL)

	{

		printf("\nCannot open directory file\n");

		exit(1);
	}

	printf("\nEnter name of student: ");

	gets(st_name);

	printf("\n");

	while (!feof(fp))

	{

		fgets(st_name2, strlen(st_name) + 1, fp);

		if (!strcmp(st_name, st_name2))

		{

			fscanf(fp, "%s", id_number);

			printf("Name: %s\nID Number: %s\n\n", st_name, id_number);

			break;
		}
	}

	fclose(fp);
}

int menu()

{

	char ch;

	do
	{

		printf("(W)rite, (A)ppend, (L)ookup, or (Q)uit : ");

		scanf("%s", ch);

		printf("\n");

	} while (ch != 'q' && ch != 'w' && ch != 'a' && ch != 'l');

	return ch;
}

int main()

{

	char choice;

	do
	{

		choice = menu();

		switch (choice)

		{

		case 'w':
			write();

			break;

		case 'a':
			append();

			break;

		case 'l':
			lookup();

			break;
		}

	} while (choice != 'q');
}
