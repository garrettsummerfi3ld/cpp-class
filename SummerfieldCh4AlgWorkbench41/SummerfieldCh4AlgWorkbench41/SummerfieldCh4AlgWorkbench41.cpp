#include <iostream>

using namespace std;

int main()
{
	// Vars
	int hours;

	// Request input
	cout << "Input hours: "; 
	cin >> hours;

	// Conditional statement
	if (!(hours >= 0 && hours <= 80))
		cout << "The number is not valid";

	return 0;
}
