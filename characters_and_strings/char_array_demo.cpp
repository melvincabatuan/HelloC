#include <stdio.h>
#include <ctype.h>
#include <string.h>  // needed by strlen

int main()
{

	char message[] = "Hello World 2021!";   // C-string

	int i = 0;
	int letter_count = 0, digit_count = 0;
	while(message[i] != '\0'){
		printf("%c", toupper(message[i]));
		if (isalpha(message[i]))
			letter_count++;
		if (isdigit(message[i]))
			digit_count++;
		i++;
	}
	printf("\nThe number of letters is %d.", letter_count);
	printf("\nThe number of digits is %d.", digit_count);
	printf("\nThe length of the string is %d.", strlen(message));
	
		









	// char greeting[] = "Hello World!!!";
	// char new_greet[18];

	// // strcpy(new_greet, greeting);

	// int i = 0;
	// while (greeting[i] != '\0')
	// {
	// 	new_greet[i] = greeting[i];
	// 	++i;
	// }
	// new_greet[4] = '\0';

	// printf("%s \n", new_greet);


	// int i = 0;
	// int length = 0;
	// while (greeting[i] != '\0')
	// {
	// 	printf("%c", toupper(greeting[i]));
	// 	++i;
	// 	++length;
	// }

	// printf("The length of my string is %d.\n", length);
	// printf("The length of my string is %d.\n", strlen(greeting));

	// int i = 0, letter_count = 0, space_count = 0;

	// while (greeting[i] != '\0')
	// {
	// 	if (isalpha(greeting[i]))
	// 		++letter_count;
	// 	if (isspace(greeting[i]))
	// 		++space_count;
	// 	++i;

	// }
	// printf("The number of letters are %d.\n", letter_count);
	// printf("The number of spaces are %d.\n", space_count);

	// char greeting[] = "Hello!";
	// int i = 0;
	// while(greeting[i] != '\0'){
	// 	printf("%c", greeting[i]);
	// 	++i;
	// }

	// if (greeting[6] == '\0'){
	// 	puts("Indeed, there is a NULL CHAR at the end.");
	// } else {
	// 	puts("I'm lying to you!");
	// }

	// char sample[] = "Hello, World!\n";
	// int index = 0;
	// while(sample[index] != '\0')
	// {
	// 	putchar(sample[index]);
	// 	index++;
	// }
	return (0);
}
