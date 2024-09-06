// This program will output the circumference and area
// of the circle with a given radius.

//// Marcelino Salazar
// CSCI-40-52421
// Lab 2.2

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	float area;								// definition of area of circle 
	int circumference;				// definition of circumference 
	
    circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * (RADIUS * RADIUS);							// computes area

	cout << "The circumference of the circle is " << circumference << endl;
    cout << "The area of the circle is " << area << endl;

	return 0;
}

// Initially produces a syntax error due to missing semicolon, missing definition for area, and missing expression for area.
// I changed circumference defintion to integer and added float to area.
// The output value of circumference is a discrete integer and no longer a floating point.
// I assigned the formula expression to area variable.