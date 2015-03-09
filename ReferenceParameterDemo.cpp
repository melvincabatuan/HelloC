#include <iostream>

using namespace std;

void swap(double & a, double & b) // a, b are reference params
{
  double tmp = a;
  a = b;
  b = tmp;
}

int main(){
    int a = 9, b = 1; 
    cout << "Swap( " << a <<", " << b << " )"<< endl;
    swap( a, b);
    cout << "New values: ( " << a <<", " << b << " )"<< endl;
    return 0;
}
