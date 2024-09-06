// This program demonstrates the use of characters and strings

// Marcelino Salazar
// CSCI-40-52421
// Lab 2.4

#include <iostream>
#include <string>
using namespace std;

// Definition of constants
const string FAVORITESODA = "Dr. Dolittle";	// use double quotes for strings 
const char BESTRATING = 'A';				// use single quotes for characters

int main()
{
	char rating;			// 2nd highest product rating
	string favoriteSnack;	// most preferred snack
	int numberOfPeople;		// the number of people in the survey
	int topChoiceTotal;		// the number of people who prefer the top choice

    favoriteSnack = "cookies";
    rating = 'B';
    numberOfPeople = 250;
    topChoiceTotal = 148;
	// Fill in the code to do the following:
	// Assign the value of "crackers" to favoriteSnack
	// Assign a grade of 'B' to rating
	// Assign the number 250 to the numberOfPeople
	// Assign the number 148 to the topChoiceTotal

	// Fill in the blanks of the following:
	cout << "The preferred soda is " << FAVORITESODA << endl; 
	cout << "The preferred snack is " << favoriteSnack << endl; 
	cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating
		 << endl;

	return 0;
}

/*

Is it possible to change the choice of FAVORITESODA by adding
code within the main module of the program? Why or why not?
- NO, because the variable is a constant string which cannot be modified after initialized.

Is it possible to change the choice of favoriteSnack by adding code
within the program? Why or why not?
- YES, because it is not a constant and is not initialized with an assigned value. Regradless it would be possible to modify.

*/