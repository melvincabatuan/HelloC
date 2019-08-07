#include <iostream>

int main(){
	int x = 10;
	int *pX = &x;
	printf("\nThe address of x variable = %x", &x);  // & - 'address of' x
	printf("\nThe value of x variable = %d", x);  
	printf("\nThe address of pX = %x", &pX);
	printf("\nThe value of pX = %x", pX);
	*pX = 23;  // dereferencing
	printf("\nThe value of x variable = %d", x); 
	return 0;
}
