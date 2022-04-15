//********************************************************
// This program converts measurements in feet and inches into
// centimeters using the formula that 1 inch is equal to 2.54 centimeters.
//********************************************************

// Header file
#include <stdio.h>

int main()
{
	// Declare variables
	int feet, inches;
	int totalInches;
	double centimeter;

	// Declare constants
	const double CENTIMETERS_PER_INCH = 2.54;
	const int INCHES_PER_FOOT = 12;

	// Conversion
	// Statements: Step 1 - Step 7
	printf("Enter two integers, one for feet and one for inches: \n"); // Step 1

	scanf("%d %d", &feet, &inches); // Step 2

	printf("\nThe numbers you entered are %d for feet and %d for inches. ", feet, inches); // Step 3

	totalInches = INCHES_PER_FOOT * feet + inches; // Step 4

	printf("\nThe total number of inches = %d.\n", totalInches); // Step 5

	centimeter = CENTIMETERS_PER_INCH * totalInches; // Step 6

	printf("\nThe number of centimeters = %0.2lf", centimeter); // Step 7

	return 0;
}
