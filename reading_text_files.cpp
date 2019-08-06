#include <iostream>
#include <fstream>  // file stream input file stream: ifstream
//            output file stream: ofstream
// getline
using namespace std;


        int main () {

        string line;
        ifstream myfile("sample.txt"); // declare an input file stream

        if (!myfile.is_open())  // only do operation if indeed the file is open
        {
        cout << "Can't open your file" << endl;
        return 1;
        }
        // when the file is open, I will print all text
        while (getline (myfile, line) )
        {
        cout << line << endl;
        }

        myfile.close();
        return 0;
        }
