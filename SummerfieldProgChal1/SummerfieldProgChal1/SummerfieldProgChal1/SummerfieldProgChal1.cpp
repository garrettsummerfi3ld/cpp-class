#include <iostream>
using namespace std;

int main()
{
	// Vars
	double hours, rate, pay;

	// Inputs
	cout << "How many hours? ";
	cin >> hours;

	cout << "How much per hour? ";
	cin >> rate;

	// Calc rate
	pay = rate * hours;

	// Output
	cout << "You earned $" << pay << endl;

	return 0;
}
