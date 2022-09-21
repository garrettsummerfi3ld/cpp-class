#include <iostream>

using namespace std;

int binSearch(const string [], int, string);

int main()
{
	const int SIZE = 10;

	string luckyNums[SIZE] = {"13579", "26791", "26792", "33445", "55555", "62483", "77777", "79422", "85647", "93121"};

	string luckySearch;
	int result;

	cout << "Enter a lucky number from this week's lottery" << endl;
	cin >> luckySearch;

	result = binSearch(luckyNums, SIZE, luckySearch);

	if (result == -1)
	{
		cout << "Number " << luckySearch << " was not a lucky number" << endl;
	}
	else
	{
		cout << "Number " << luckySearch << " was a lucky number!" << endl;
	}

	system("pause");

	return 0;
}

int binSearch(const string array[], int size, string val)
{
	int first = 0, last = size - 1, mid, pos = -1;
	bool located = false;

	while (!located && first <= last)
	{
		mid = (first + last) / 2;
		if (array[mid] == val)
		{
			located = true;
			pos = mid;
		}
		else if (array[mid] > val)
		{
			last = mid - 1;
		}
		else
		{
			first = mid + 1;
		}
	}
	return pos;
}
