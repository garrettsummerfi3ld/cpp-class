#include <iostream>

using namespace std;

int biggest(int, int, int);

int main()
{
	int numA, numB, numC;
	cout << "Input a total of three numbers to calculate which is the biggest number." << endl;

	cout << "Number 1: ";
	cin >> numA;
	cout << "Number 2: ";
	cin >> numB;
	cout << "Number 3: ";
	cin >> numC;

	cout << "The largest number is " << biggest(numA, numB, numC) << endl;
}

int biggest(int inputA, int inputB, int inputC)
{
	int largeNum;
	if (inputA >= inputB && inputA >= inputC)
	{
		largeNum = inputA;
	} else if (inputB >= inputA && inputB >= inputC)
	{
		largeNum = inputB;
	}
	else
	{
		largeNum = inputC;
	}

	return largeNum;
}
