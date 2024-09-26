// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average >= 90 && average < 101)
		cout << "You Pass with an A" << endl;

    else if (average >= 80 && average < 90)
    {
        cout << "You passed with a B" << endl;
    }

    else if (average >= 60 && average < 80)
    {
        cout << "You Pass";
    }
    
    else if ( average > 100 | average < 0)
    {
        cout << "Invalid data";
    }
    
	else
		cout << "You Fail" << endl;

	return 0;
}

/*

Run the program three times using 80, 55 and 60 for the average.
What happens when you input 60 as the average? Modify the first if
statement so that the program will also print “You Pass” if the average
equals 60.
- Initially the program does not account for 60 and has no output for 60 as input.

The modified program creates categories for averages from 0 to 100 and invalidates anything less than or greater than.
*/
