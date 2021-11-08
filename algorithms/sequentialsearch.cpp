// This program illustrates how to use a sequential search in a program.
/*
$ g++ sequentialsearch.cpp -o sequentialsearch
$ ./sequentialsearch 
 Enter 10 integers.
1 2 3 4 5 6 7 8 9 10

 Enter the number to be searched: 7

 7 is found at position 6
*/

#include <iostream>  

using namespace std;  

const int ARRAY_SIZE = 10;  

int seqSearch(const int list[], int listLength, int searchItem);  


int main()  
{  
	int intList[ARRAY_SIZE];  
	int number;  
	cout << " Enter " << ARRAY_SIZE << " integers." << endl;  

	for (int index = 0; index < ARRAY_SIZE; index++)  
	cin >> intList[index];  
	cout << endl;  
	cout << " Enter the number to be searched: ";  
	cin >> number;  
	cout << endl;  

	int pos = seqSearch(intList, ARRAY_SIZE, number);  
	if (pos!= -1)  
	cout <<" " << number<< " is found at position " << pos
	<< endl;  
	else  
	cout << " " << number
	<< " is not in the list." << endl;  
	return 0;  
}  
 


int seqSearch(const int list[], int listLength, int searchItem)
{
 int loc;
 bool found = false;
 loc = 0;
 
 while (loc < listLength && !found)
 if (list[loc] == searchItem)
    found = true;
 else
    loc++;
 if (found)
     return loc;
 else
     return -1;
}
