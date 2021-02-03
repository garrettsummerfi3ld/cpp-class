#include <iostream>
using namespace std;

// Vars
double total_cost = 0, tax, tip_rate, subtotal_cost;

int main()
{
	// Values from prompt
    subtotal_cost = 44.50;
	tax = 6.75;
	tip_rate = 0.15;

	total_cost += (subtotal_cost / tax) + (subtotal_cost * tip_rate) + subtotal_cost;

	cout << "SUBTOTAL: $" << subtotal_cost << "\nTAX: $" << tax << "\nTIP: $" << tip_rate << "\nTOTAL COST: $" << total_cost << endl;
}