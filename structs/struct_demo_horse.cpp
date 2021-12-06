//#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

struct Horse
{ 				/* Structure definition */
	int age;
	int height;
	char name[20];
	char father[20];
	char mother[20];
}; 




int main(){
	
	struct Horse *pHorse;
	
	// struct Horse actualHorse = {12, 5, "Petra", "Pedro", "Pedra"};
	
	struct Horse actualHorse;
  
    actualHorse.age = 10;
    actualHorse.height = 3;
    strcpy(actualHorse.name, "Caltex");
    strcpy(actualHorse.father, "Petron");
	strcpy(actualHorse.mother, "Shell");
	
	std::cout << "actualHorse.age = " << actualHorse.age << std::endl;
	std::cout << "actualHorse.height = " << actualHorse.height << std::endl;
	std::cout << "actualHorse.name = " << actualHorse.name << std::endl;
	std::cout << "actualHorse.father = " << actualHorse.father << std::endl;
	
	return 0;
}
