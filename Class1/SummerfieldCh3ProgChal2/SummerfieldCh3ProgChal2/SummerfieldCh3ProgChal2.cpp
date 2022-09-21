#include <iostream>
#include <iomanip>

using namespace std;

// Global vars
const int rate_hours = 24;
const int rate_minutes = 1440;
const int rate_seconds = 86400;

int main()
{
	// Local vars
	int days, convertHours, convertMinutes, convertSeconds;

	// User inputs days
    cout << "Input number of vacation days: ";
	cin >> days;

	// Calculate each rate
	convertHours = days * rate_hours;
	convertMinutes = days * rate_minutes;
	convertSeconds = days * rate_seconds;

	// Output each metric to user
	cout << left << setw (25) << "Hours of vacation:" << right << setw (8) << convertHours << endl;
	cout << left << setw (25) << "Minutes of vacation:" << right << setw (8) << convertMinutes << endl;
	cout << left << setw (25) << "Seconds of vacation:" << right << setw (8) << convertSeconds << endl;
}

