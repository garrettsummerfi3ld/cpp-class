#include <iostream>

using namespace std;

/**
 * \brief Function that checks if a number is a perfect square
 * \param input Integer to perform perfect input on
 * \return Perfect square of input
 */
int square(const int input)
{
	const int perfectSquare = sqrt(input);

	// Check if inout is perfect square
	if (pow(perfectSquare, 2) == input)
	{
		return perfectSquare;
	}
	throw string("The number is not a perfect square.\n");
}

/**
 * \brief Main program
 * \return graceful exit code
 */
int main()
{
	int number;
	cout << "Input a perfect square: ";
	cin >> number;
	// Attempts to perfect square the number
	try
	{
		cout << square(number);
	}
	catch (string ex)
	{
		cout << ex;
	}

	return 0;
}
