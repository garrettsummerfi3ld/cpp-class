#include <iostream>
using namespace std;

int main()
{
	// Vars
	double barSold, barCost, total;

	// Inputs
	cout << "How many candy bars sold? ";
	cin >> barSold;

	cout << "How much does each candy bar cost? ";
	cin >> barCost;

	// Calc rate
	total = barCost * barSold;

	// Output
	cout << "You earned $" << total << endl;

	return 0;
}
