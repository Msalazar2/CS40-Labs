// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// Marcelino Salazar
// CSCI-40-52421
// Lab 3.4

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	float batAvg;

	batAvg = static_cast<float>(HITS) / AT_BAT;	 // an assignment statement 
	cout << "The batting average is " << batAvg << endl;	// output the result

	return 0;
}

// Initially the batting average is 0.
// After chinging the batAvg data type from int to float, the average is still 0.
// To get the expected result 0.292162 without converting data types of both constants, I converted the integer HITS to a float before dividing.