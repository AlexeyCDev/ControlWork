#include <iostream>
using namespace std;

int main()
{

    double sumDeposit = 0; // Deposit amount
    int amountMonth = 0; // Total of mounths
    double profit = 0; // Profit
    double annualRate = 5; // five percent per annum
    int daysInYear = 365;
    int daysInMonth = 30;

    cout << "Enter the deposit amount in dollars: ";
    cin >> sumDeposit;
    cout << "Enter the number of months: ";
    cin >> amountMonth;

    cout << "\nCalculation :\n"<< endl;
    cout << "Interest per month: ";
    profit = sumDeposit * (annualRate / 100)  / daysInYear * daysInMonth;

    cout << sumDeposit << " * " << annualRate << "%  / " << daysInYear
         << " * " << daysInMonth << " = " << profit << "$" << endl;

    cout << "Interest for the entire term: ";
    profit *= amountMonth;
    cout << profit << " $"  << endl;

    cout << "The total amount of payment at the end of the term: "
         << sumDeposit + profit  << " $";
    cout << endl << endl;

    return 0;
}
