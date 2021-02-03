#include <iostream>
using namespace std;

// Vars
double total_cost = 0, tax_rate, tax_calc, tip_rate, tip_calc, subtotal_cost;

int main()
{
	// Values from prompt
    subtotal_cost = 44.50;
	tax_rate = 0.0675;
	tip_rate = 0.15;

	// Calculate tax_calc and tip_calc
	tax_calc = subtotal_cost * tax_rate;
	tip_calc = (subtotal_cost + tax_calc) * tip_rate;

	// Calculate total_cost
	total_cost = tax_calc + tip_calc + subtotal_cost;
	
	// Output to user
	cout << "SUBTOTAL: $" << subtotal_cost << "\nTAX: $" << tax_calc << "\nTIP: $" << tip_calc << "\nTOTAL COST: $" << total_cost << endl;
}