#include <iostream>
#include <iomanip>

using namespace std;

// Global const
const double rate_coverage = 0.8;

int main()
{
	// Local vars
	double home_cost, covered_cost;

	// Input
    cout << "Cost of structure/property to replace structure/property: $";
	cin >> home_cost;

	// Calculations for covering costs
	covered_cost = home_cost * rate_coverage;

	// Output calculations to user
	cout << "MINIMUM amount of insurance required for property: $" << fixed << showpoint << setprecision(2) << covered_cost << endl;
}
