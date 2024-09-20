// Marcelino Salazar
// CSCI-40-52421
// Exam P2

/* This program computes an realtor's bonus based on sales generated.
* Realtor's sales data are used to determine percentage bonus and extra bonus as
* follows:
* Period Sales Total Extra Bonus Bonus Percentage
* <= $300000 0 3%
* $300000.01 - $400000 500 3.25%
* $400000.01 - $500000 1000 3.3%
* $500000.01 - $600000 2000 3.4%
* $600000.01+ 3000 3.5%
*
* The program computes the bonus based on amount sold and displays total bonus
amount
* in dollars. The bonus percentage includes the extra bonus amount to give a higher
* bonus amount.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // define variables
    string realtorName;
    double salesTotal;
    double extraBonus = 0;
    double bonusPercentage = 0;
    double bonusSubtotal = 0;
    double totalBonus = 0;

    // Prompt user for and store realtor's name
    cout << "Enter employee name: ";
    getline(cin, realtorName); // captures first and last name

    // Prompt user for sales total for previous period
    cout << "What was the sales total for the previous period? ";
    cin >> salesTotal;

    cout << "calculating..." << endl; // extra touch

    // Determine extra bonus and percent bonus per table given
    if (salesTotal <= 300000) {
        extraBonus = 0;
        bonusPercentage = 3;
    } else if (salesTotal <= 400000) {
        extraBonus = 500;
        bonusPercentage = 3.25;
    } else if (salesTotal <= 500000) {
        extraBonus = 1000;
        bonusPercentage = 3.3; 
    } else if (salesTotal <= 600000) {
        extraBonus = 2000;
        bonusPercentage = 3.4;
    } else {
        extraBonus = 3000;
        bonusPercentage = 3.5;
    }

    // Calculates the bonus subtotal amount
    bonusSubtotal = (salesTotal + extraBonus) * (bonusPercentage / 100);

    // Calculates the total bonus
    totalBonus = extraBonus + bonusSubtotal;

    // Sets the output to fixed and with 2 decimal places
    cout << fixed << setprecision(2);

    // display results for salesperon in dollars and cents (including sales,
    // extra bonus, bonus percentage, bonus amount in dollars and cents,
    // and total bonus in dollars and cents
    cout << "\nSales and bonus for previous period – " << realtorName << endl;
    cout << "Sales: " << salesTotal << endl;
    cout << "Extra Bonus: $" << extraBonus << endl;
    cout << fixed << setprecision(1) << "Bonus percentage: " << bonusPercentage << "%" << endl;
    cout << fixed << setprecision(2); // setprecision from 1 back to 2
    cout << "Bonus subtotal amount: $" << bonusSubtotal << endl;
    cout << "Total bonus: $" << totalBonus << endl;

return 0;
}
