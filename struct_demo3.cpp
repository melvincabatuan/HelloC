#include <iostream>
#include <cstring>

// "Define" a structure
struct employee {
	int idNumber;
	std::string name; 
	float asda;
	
};



int main(){
	const int MAX_LIMIT = 10;
	struct employee frosh[MAX_LIMIT];
	frosh[0].idNumber = 1122313;
	frosh[0].name    = "Melvin Cabatuan";
	std::cout << "idNumber = " << frosh[0].idNumber << std::endl;
	std::cout << "name = " << frosh[0].name << std::endl;
	return 0;
}
