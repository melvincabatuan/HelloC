#include <iostream>
using namespace std;

void assignValues(int[], int);
void displayValues(int[], int);
const int MAX = 3;

int main ()
{ 
    int testScore[MAX]; 
    assignValues(testScore, MAX); 
    displayValues(testScore, MAX);
    return 0;
}

void assignValues(int tests[], int num){ 
     for (int i = 0; i < num; i++) 
     { 
         cout << "Enter test score #" << i + 1 << ": "; 
         cin >> tests[i]; 
     }
}

void displayValues(int scores[], int elems){ 
     for (int i = 0; i < elems; i++) 
     {
         cout << "Test score #" << i + 1 << ": " << scores[i] << endl; 
     }
}
