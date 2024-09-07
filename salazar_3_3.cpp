// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

// Marcelino Salazar
// CSCI-40-52421
// Lab 3.3

#include <iostream>
#include <cmath>	// needed for math functions like sqrt() and pow()
#include <iomanip>
using namespace std;

int main()
{
	float a, b;	// the smaller two sides of the triangle 
	float hyp;	// the hypotenuse calculated by the program

	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

// Fill in the assignment statement that determines the hypotenuse
	hyp = sqrt(pow(a, 2) + pow(b, 2));

	cout << "The sides of the right triangle are " << a << " and " << b << endl;
	cout << "The hypotenuse is " << fixed << setprecision(2) << hyp << endl;

	return 0;
}

// The formula for finding the hypotenuse is hyp = square root of a2 + b 2, to implement this in c++ I will use functions sqrt() and pow().
// I will alter the program using function setprecision() and fixed manipulator to round two decimal places. I will need to import <iomanip> library.