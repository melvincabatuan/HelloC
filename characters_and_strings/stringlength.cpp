#include <stdio.h>
/********************************************************
* length -- Computes the length of a string. *
* *
* Parameters *
* string -- The string whose length we want. *
* *
* Returns *
* the length of the string. *
********************************************************/
int length(char string[])
{
int index; /* index into the string */
/*
* Loop until we reach the end of string character
*/
for (index = 0; string[index] != '\0'; ++index)
/* do nothing */
return (index);
}

int main()
{
char line[100]; /* Input line from user */
while (1) {
printf("Enter line:");
fgets(line, sizeof(line), stdin);
printf("Length (including newline) is: %d\n", length(line));
}
}
