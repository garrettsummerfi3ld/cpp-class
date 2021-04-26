#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 10;

	int id[SIZE];
	double pay[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Employee " << id[i] << " pay: $" << pay[i];
	}
}
