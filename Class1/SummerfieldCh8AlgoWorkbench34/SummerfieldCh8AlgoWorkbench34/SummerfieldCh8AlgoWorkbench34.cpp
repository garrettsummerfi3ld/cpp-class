#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int temp[7][24];

	int avgTempTues, sumTemp = 0, avgTempNoon;

	// Random number gen
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 23; j++)
		{
			int randNum = rand() % 100 + 1;
			temp[i][j] = randNum;
		}
	}

	// Tuesday avg temp
	for (int i = 0; i < 23; i++)
		sumTemp += temp[2][i];

	avgTempTues = sumTemp / 24;

	cout << "Tuesday Average: " << avgTempTues << endl;

	// Since this is just a placeholder, resetting the value doesn't lose much data
	sumTemp = 0;

	// Noon avg temp
	for (int i = 0; i < 6; i++)
	{
		sumTemp += temp[i][12];
	}

	avgTempNoon = sumTemp / 7;
	
	cout << "Noon Average: " << avgTempNoon << endl;

	system("pause");

	return 0;
}