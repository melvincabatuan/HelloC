/*
$ g++ stringDemo.cpp -o stringDemo
$ ./stringDemo 
names[0] = 
Melvin Cabatuan
names[1] = 
Marvelle Cabatuan
names[2] = 
Nick Cabatuan
names[0] = Melvin Cabatuan
names[1] = Marvelle Cabatuan
names[2] = Nick Cabatuan
*/

#include<iostream>
#include<cstring>

using namespace std;

int main ()
{
  int j;
  char names[3][128];

  for (j = 0; j < 3; j++)
  {
      cout << "names["<<j<<"] = "<< endl;
      cin.getline(names[j], 128);
  }  

  for (j = 0; j < 3; j++)
      cout << "names["<<j<<"] = "<< names[j] << endl;
  
  return 0;
}
