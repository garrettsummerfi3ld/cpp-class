#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double presentValue(int, double, int);

int main()
{
	int futureSavings, totalMonths;
	double annualInterest, savingsValue;

	cout << fixed << showpoint << setprecision(2);

	
	cout << "Interest Calculator\n\nInput how much money you want to have saved in the future: $";
	cin >> futureSavings;

	cout << "\nInput the annual interest rate (percentage): %";
	cin >> annualInterest;

	cout << "\nInput how long you want to have the money sit in the account to gain interest (in months): ";
	cin >> totalMonths;

	savingsValue = presentValue(futureSavings, annualInterest, totalMonths);
	
	cout << "\nIn order to have $" << futureSavings << " in " << totalMonths << " months with an interest rate of " << annualInterest << " percent, you need to put in $" << savingsValue << " into savings today.";
}

double presentValue(int futureSavedMoney, double interestRate, int time)
{
	double calculatedInterestRate = (interestRate / 100) / 12;

	double calculatedPresentSavings = futureSavedMoney / pow((1 + calculatedInterestRate), time);

	return calculatedPresentSavings;
}
