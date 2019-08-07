#include <iostream>

using namespace std;

int main(){
	int choice;
	cout << "Input the your choice: ";
	cin >> choice;
	switch(choice){
		case 1: 
			cout << "Polynomial";
			break;
		case 2: 
			cout << "Statistics";
			break;
		default:
			cout << "INVALID";
		
	}
	return 0;
}
