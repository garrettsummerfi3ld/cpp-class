#include <iostream>

using namespace std;

int main()
{
	// Vars
	int input, min = 0, max = 0;

	// Input
	cout << "Enter a series of numbers.\nTo stop entering numbers then enter '-99'.\n";
	cin >> input;

	while (input != -99)
	{
		if (input < min)
		{
			min = input;
		}
		if (input > max)
		{
			max = input;
		}

		cout << "Enter a number: ";
		cin >> input;
	}
	cout << "Maximum number inputted: " << max << endl;
	cout << "Minimum number inputted: " << min << endl;
}
