#include <iostream>
 
using namespace std;

const int MAX_ROWS = 3;
const int MAX_COLS = 3;
float myArray[MAX_ROWS][MAX_COLS]; 


main(){
	int rows;
	int cols;
 	cout << "Input the number of rows (max is 3): ";
 	cin >> rows;
 	cout << "Input the number of cols (max is 3): ";
 	cin >> cols;
	cout << "Input the elements: ";
	// Get the input and save it in the array
	for(int row = 0; row < rows; row++){
		for(int col = 0; col < cols; col++){
			cin >> myArray[row][col];
		}
	}
	cout<< endl;
	// Displays the elements of the array
	for(int row = 0; row < rows; row++){
		for(int col = 0; col < cols; col++){
			cout << myArray[row][col] << " ";
		}
		cout<< endl;	
	}
	
	return 0;
}
