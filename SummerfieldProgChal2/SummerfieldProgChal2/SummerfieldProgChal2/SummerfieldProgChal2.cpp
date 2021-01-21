#include <iostream>
using namespace std;

int main()
{
	// Vars
	double ballsPurchased, ballCost, total;

	// Inputs
	cout << "How many baseballs purchased? ";
	cin >> ballsPurchased;

	cout << "How much does each baseball cost? ";
	cin >> ballCost;

	// Calc rate
	total = ballCost * ballsPurchased;

	// Output
	cout << "You spent $" << total << " on baseballs";

	return 0;
}
