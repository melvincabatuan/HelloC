//Menu-driven program.

#include <iostream>
using namespace std;

const double CONVERSION = 2.54;
const int INCHES_IN_FOOT = 12;
const int CENTIMETERS_IN_METER = 100;

void showChoices();
void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct);
void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in);

int main()
{
       int feet, inches;
       int meters, centimeters;
       int choice;

       do
       {
       showChoices();
       cin >> choice;
       cout << endl;

       switch (choice)
       {
       case 1:
            cout << "Enter feet and inches: ";
            cin >> feet >> inches;
            cout << endl;
            feetAndInchesToMetersAndCent(feet, inches, meters, centimeters);
            cout << feet << " feet(foot), "<< inches << " inch(es) = " << meters << " meter(s), "
            << centimeters << " centimeter(s)." << endl;
       break;

       case 2:
       cout << "Enter meters and centimeters: ";
       cin >> meters >> centimeters;
       cout << endl;
       metersAndCentTofeetAndInches(meters, centimeters,feet, inches);
       cout << meters << " meter(s), " << centimeters << " centimeter(s) = " << feet << " feet(foot), "
       << inches << " inch(es)."
       << endl;
       break;

       case 99:
       break;

       default:
       cout << "Invalid input." << endl;
     }// END OF SWITCH
}
while (choice != 99);
return 0;
} // END OF MAIN








/// Function Definitions

void showChoices()
{
cout << "Enter--" << endl;
cout << "1: To convert from feet and inches to meters "
<< "and centimeters." << endl;
cout << "2: To convert from meters and centimeters to feet "
<< "and inches." << endl;
cout << "99: To quit the program." << endl;
}


void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct)
{
int inches;
inches = f * INCHES_IN_FOOT + in;
ct = static_cast<int>(inches * CONVERSION); // data type conversion through the use of a cast operator.
mt = ct / CENTIMETERS_IN_METER;
ct = ct % CENTIMETERS_IN_METER;
}

void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in)
{
int centimeters;
centimeters = mt * CENTIMETERS_IN_METER + ct;
in = static_cast<int>(centimeters / CONVERSION); // data type conversion through the use of a cast operator.
f = in / INCHES_IN_FOOT;
in = in % INCHES_IN_FOOT;
}


/*
Sample Run:

$ g++ menu3.cpp -o menu3
PhD:~/HelloC$ ./menu3
Enter--
1: To convert from feet and inches to meters and centimeters.
2: To convert from meters and centimeters to feet and inches.
99: To quit the program.
1

Enter feet and inches: 2 1

2 feet(foot), 1 inch(es) = 0 meter(s), 63 centimeter(s).
Enter--
1: To convert from feet and inches to meters and centimeters.
2: To convert from meters and centimeters to feet and inches.
99: To quit the program.
2

Enter meters and centimeters: 1 10

1 meter(s), 10 centimeter(s) = 3 feet(foot), 7 inch(es).
Enter--
1: To convert from feet and inches to meters and centimeters.
2: To convert from meters and centimeters to feet and inches.
99: To quit the program.
99


*/
