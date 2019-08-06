#include <iostream>

using namespace std;

int main(){
	int x = 10;
	int myArray[] = {1,2,3};
	int *pX;   // uninitialized pointer
	pX = &x;
	printf("address of x is %x\n", &x);
	printf("value of pX is %x\n", pX);
	printf("the value of pointed variable is %d", *pX);
	*pX = 20;
	printf("value of x is %d\n", x);
	return 0;
}
