#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Vars
	int days;
	double payRate = 0.01;
	double earnings = 0.00;

	// Inputs from user
	cout << "How many days have you worked? ";
	cin >> days;

	// Sets formatting for output
	cout << fixed << showpoint << setprecision(2);

	// Validate user input
	if (days >= 1 && days <= 31)
	{
		for (int i = 1; i <= days; i++)
		{
			earnings += payRate;
			payRate *= 2;
		}

		// Output to user about earnings
		cout << "Days worked: " << days << endl;
		cout << "Earnings: " << earnings << endl;
	}
	else
	{
		// Outputs to user if the input is not validated
		cout << "You must enter a number between 1-31";
	}
}
