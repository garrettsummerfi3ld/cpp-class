#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function prototype
double fallingDistance(int);

int main()
{
	// Output to user and set formatting
	cout << "Falling Distance calculator\n";
	cout << fixed << showpoint << setprecision(1);

	// Run ten times
	for (int i = 1; i <= 10; i++)
	{
		cout << "The distance in meters fallen in " << i << " second(s) is: "  << fallingDistance(i) << " meters." << endl;;
	}
}

// Function 
double fallingDistance(int input)
{
	// Formula to calculate the falling distance.
	double calcDistance = 9.8 * pow(input,2)/2;
	return calcDistance;
}
