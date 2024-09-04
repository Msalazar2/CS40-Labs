// This program demonstrates a compile error.

// Marcelino Salazar
// CSCI-40-52421
// Lab 1.2

#include <iostream>
using namespace std;

int main()
{
	int number;
	float total;

	cout << "Today is a great day for Lab";
	cout << endl << "Let's start off by typing a number of your choice" << endl;
	cin >> number;

	total = number * 2;
	cout << total << " is twice the number you typed" << endl;

	return 0;
}