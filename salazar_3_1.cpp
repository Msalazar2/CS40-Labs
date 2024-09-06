// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Marcelino Salazar
// CSCI-40-52421
// Lab 3.1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased 
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.

	cout << fixed << setprecision(4) << showpoint;	// formatted output 
	cout << "Please input the number of items bought" << endl;

	// Fill in the input statement to bring in the quantity.
    cin >> quantity;

    // Fill in the prompt to ask for the price.
    cout << "Please input the price of each item: " << endl;

    // Fill in the input statement to bring in the price of each item.
    cin >> itemPrice;

    // Fill in the assignment statement to determine the total bill.
    totalBill = quantity * itemPrice;

    // Fill in the output statement to print total bill, with a label to the screen.
    cout << " " << endl;
    cout << "The total bill is: $" << totalBill << endl;

	return 0;
}

// I without the fixed attribute the output format is in scientific notation. (The total bill is: $2.4e+02).
// The fixed attribute in conjunction with setprecision() formats the floating point in a fixed number of decimal places.
// With setprecision(4) the ouput is (The total bill is: $241.5600).
// The setprecision() attribute sets the number of significant digits or decimal places.