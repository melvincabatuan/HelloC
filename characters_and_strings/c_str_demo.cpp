#include <iostream>
#include <cstring>  // use string

using namespace std;

char database[16][128];

int main(){
	string line;
	cout << "Input a string: ";
	getline(cin, line);
	cout << "line = " << line;
	
	// Copying a cpp string into c char array  
	strncpy ( database[0], line.c_str(), sizeof(database[0]) );
	cout << "\ndatabase[0] = " << database[0];
	return 0;
}
