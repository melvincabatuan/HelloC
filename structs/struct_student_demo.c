#include <stdio.h>
#include <string.h>

// "Define" a structure
struct student
{
	int idNumber;
	char name[128];
};

int main()
{
	// Declare a frosh variable which is a struc student
	struct student frosh;
	// Assign values using . operator
	frosh.idNumber = 1153465;
	printf("The id number is %d.\n", frosh.idNumber);
	strcpy(frosh.name, "Edgar Dolon");
	printf("The name is %s.", frosh.name);
	return 0;
}
