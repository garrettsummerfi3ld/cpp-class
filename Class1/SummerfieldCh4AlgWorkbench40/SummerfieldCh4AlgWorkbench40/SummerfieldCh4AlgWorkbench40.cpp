#include <iostream>

using namespace std;

int main()
{
	// Vars
	int temperature;

	// Request input
	cout << "Input temperature: ";
	cin >> temperature;

	// Conditional statement
	if (temperature >= -50 && temperature <= 150)
		cout << "The number is valid.";

	return 0;
}
