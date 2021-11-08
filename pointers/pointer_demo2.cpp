#include <iostream>
// #include <cstring>

int main(){
	const int SIZE = 4; 
	int myArray[SIZE] = {10,20,30,40};
	// printf("myArray = %d", myArray);
	
	int *ptr = myArray;
	
	int count = 0;
	while(count < SIZE){
		printf("\nmyArray address = %x", ptr++);
		count++;
	}
	return 0;
}
