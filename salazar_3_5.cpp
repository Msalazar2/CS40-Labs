// This program will input total sales in a month and state and local taxes to be paid. 
// The output will be in fixed notation with 2 decimal places

// Marcelino Salazar
// CSCI-40-52421
// Lab 3.5 option 3

#include <iostream>
#include <iomanip>  // Needed for formatting
using namespace std;

int main() {
    double totalSales, stateTaxPercent, localTaxPercent;
    double stateTax, localTax;

    // Input total sales
    cout << "Please input the total sales for the month" << endl;
    cin >> totalSales;

    // Input state and local tax percentages
    cout << "Please input the state tax percentage in decimal form (.02 for 2%)" << endl;
    cin >> stateTaxPercent;

    cout << "Please input the local tax percentage in decimal form (.02 for 2%)" << endl;
    cin >> localTaxPercent;

    // Convert percentage to decimal and calculate the taxes
    stateTax = totalSales * stateTaxPercent;
    localTax = totalSales * localTaxPercent;

    // Set output formatting for 2 decimal places
    cout << fixed << setprecision(2);

    // Output total sales and calculated taxes
    cout << "Total sales for the month is $" << totalSales << endl;
    cout << "The state tax for the month is $" << stateTax << endl;
    cout << "The local tax for the month is $" << localTax << endl;

    return 0;
}
