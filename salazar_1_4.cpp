// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

// Marcelino Salazar
// CSCI-40-52421
// Lab 1.4

#include <iostream>
using namespace std;

int main()
{
	float firstNumber;
	float secondNumber;
    // Created two new variables
    float newFirst;
    float newSecond;

	// Prompt user to enter the first number. 
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number. 
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;

	// Now we will swap the values.
    // Assigned values to the new variables.
    newFirst = secondNumber;
	newSecond = firstNumber;
	

	// Output the new values.
	cout << "After swapping, the values of the two numbers are "
		 << newFirst << " and " << newSecond << endl;

	return 0;
}

// Initially the program is incorrectly swapping the two numbers inputted.
// I created two more variables and printed their new values instead.
