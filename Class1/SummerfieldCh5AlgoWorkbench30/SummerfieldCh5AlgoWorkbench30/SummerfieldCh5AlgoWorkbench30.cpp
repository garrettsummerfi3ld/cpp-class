#include <iostream>

using namespace std;

int main()
{
	int input, total = 0;
	for (int i = 1; i <= 10; i++)
	{
		cout << "Input a number:" << endl;
		cin >> input;

		total += input;
		if (i == 10)
		{
			break;
		}
	}
	cout << "Total:" << total << endl;
}
