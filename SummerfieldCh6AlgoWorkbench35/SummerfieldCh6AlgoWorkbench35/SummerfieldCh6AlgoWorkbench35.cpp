#include <iostream>

using namespace std;

// Function prototype
int timesTen(int);

int main()
{
	// Local input variables
	int numInput;

	// Request user input for a number
	cout << "Enter a number.\n";
	cin >> numInput;

	// Output function
	cout << timesTen(numInput);
}

/**
 * @brief takes a number multiplies it by ten
 *
 * @param num takes a number as input
 *
 * @return the calculated number
 */
int timesTen(int num)
{
	num *= 10;
	return num;
}