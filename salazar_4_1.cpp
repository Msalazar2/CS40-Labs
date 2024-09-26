// This program tests whether or not an initialized value
// is equal to a value input by the user

// Marcelino Salazar
// CSCI-40-52421
// Lab 4.1

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;	// num1 is not initialized
	//num2 = 5;	// num2 has been initialized to 5

	cout << "Please enter an integer" << endl;
	cin >> num1;

    // Prompt for second input
    cout << "Please enter the second integer: " << endl;
    cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2) {
		cout << "The values are the same." << endl << "Hey, that's a coincidence!" << endl;
}

	else {
		cout << "The values are not the same" << endl;
    }

	return 0;
}

/* 

Does the program do what you expect? Is so, explain what it is doing. If
not, locate the error and fix it.
- Initially the program has a logic error and uses the incorrect operator in the first if statement. I changed the assignment operator to a comparison operator.


*/