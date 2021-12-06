#include <stdio.h>
#include <stdlib.h>


// DEFINITION : NOT A MEMORY ALLOCATION!!!
struct fish {
	char *name;
	char *species;
	int teeth;
	int age;
};


int main(){
	
	const int MAX = 3; 
	struct fish clownFish[MAX];  

	clownFish[0] = {"NEMO", "Clown", 1, 2};
	clownFish[1] = {"MARLIN", "Clown", 10, 5};	
	clownFish[2] = {"MELVIN", "Clown", 30, 25};
	
	for(int i = 0; i < MAX; i++){
		printf("clownFish.name = %s \n", clownFish[i].name);
		printf("clownFish.species = %s \n", clownFish[i].species);
		printf("clownFish.teeth = %i \n", clownFish[i].teeth);
		printf("clownFish.age = %i \n", clownFish[i].age);
	}

	system("pause");
	return 0;
}
