// This program will output the perimeter and area
// of the rectangle with a given length and width.

// Marcelino Salazar
// CSCI-40-52421
// Lab 2.3

#include <iostream>
using namespace std;

const int LENGTH = 8;
const int WIDTH = 3;

int main()
{
	float area;	 // definition of area of rectangle 
	float perimeter; // definition of perimeter 
	
	area = LENGTH * WIDTH;	// computes area
    perimeter = 2 * (LENGTH + WIDTH);  // computes perimeter of rectangle
	
    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;

	return 0;
}
