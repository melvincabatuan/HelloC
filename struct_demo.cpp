#include <iostream>
#include <cstring>

// "Define" a structure
struct student {
	int idNumber;
	char name[128];  
};



int main(){
	// Declare a frosh variable which is a struc student
	struct student frosh;
	// Assign values using . operator
	frosh.idNumber = 1153465;
	std::cout << "The id number is " << frosh.idNumber<<std::endl;
	strcpy(frosh.name,"Edgar Dolon");
	std::cout << "The name is " << frosh.name;
	return 0;
}
