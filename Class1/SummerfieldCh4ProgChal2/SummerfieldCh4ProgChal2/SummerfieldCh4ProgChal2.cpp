#include <iostream>
#include <iomanip>

using namespace std;

// Constant variables
const double price = 199.99;

int main()
{
	// Variables
	int units;
	double discount = 0, total;

	// Request user input
	cout << "Software Licensing Discount Calculator\nEnter the number of licenses you have purchased: ";
	cin >> units;

	// Set output preferences
	cout << fixed << setprecision(2);

	// Logic for applying discounts
	if (units >= 10)
	{
		if (units >= 10 && units <= 19)
		{
			discount = 0.2;
		}
		else if (units >= 20 && units <= 49)
		{
			discount = 0.3;
		}
		else if (units >= 50 && units <= 99)
		{
			discount = 0.4;
		}
		else if (units >= 100)
		{
			discount = 0.5;
		}

		// Calculate price with discount
		total = (units * price) * discount;

		// Output price to user with discounts
		cout << "Total price of licenses: $" << total << endl;
	}
	else if (units > 0 && units < 10)
	{
		// Output to user that they are ineligible to get a discount
		cout << "You are ineligible for a discount.\nIn order to be eligible for a bulk discount of software licensing you need to purchase at least 10 licenses.";

		// Calculate price without discount
		total = units * price;

		// Output price to user
		cout << "Total price of licenses: $" << total << endl;
	}
	else
	{
		cout << "You cannot enter a negative number.";
	}

	return 0;
}
