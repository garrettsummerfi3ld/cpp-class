#include <iostream>
#include <vector>

using namespace std;

void large(vector<int>, int, int);

int main()
{
	int size;
	int n;

	cout << "Large number finder\nSet the size of an array:" << endl;
	cin >> size;

	vector<int> arr(size);

	for (int i = 0; i < size; i++)
	{
		cout << "Input numbers:" << endl;
		cin >> arr[i];
	}

	cout << "Input a number for a threshold:" << endl;
	cin >> n;

	large(arr,size,n);

	system("pause");

	return 0;
}

void large(vector<int> arg, int b, int c)
{
	for (int i = 0; i < b; i++)
	{
		if (arg[i] < c)
		{
			cout << "Number " << arg[i] << " is larger than the threshold value of " << c << endl;
		}
	}
}
