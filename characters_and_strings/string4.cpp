#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main( )
{
	string message[81];	/* stores 80 character length string */
	cout<<"Enter a string:\n";
	getline(cin,message);
	cout<<"The string just entered is:\n";
	puts(message);
	system("pause");

	return 0;

}
