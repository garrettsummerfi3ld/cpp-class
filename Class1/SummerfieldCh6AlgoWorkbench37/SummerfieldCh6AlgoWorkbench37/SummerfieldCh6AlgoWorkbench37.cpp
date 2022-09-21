#include <iostream>

using namespace std;

int getNumber(int);

int main()
{
	int num;
	cout << "Enter a number between 0 to 100: ";
	cin >> num;

	getNumber(num);
	cout << "Number is in range.";
}

int getNumber(int input)
{
	if (input >= 0 && input <= 100)
	{
		return input;
	}
	else
	{
		cout << "Number is not in range, try again.\n";
		main();
	}
}

