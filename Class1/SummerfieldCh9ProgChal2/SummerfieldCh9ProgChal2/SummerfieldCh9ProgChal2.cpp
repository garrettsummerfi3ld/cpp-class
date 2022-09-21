#include <iostream>

using namespace std;

void sortAlgo(string[], int);
void swap(int &, int &);

int main()
{
	const int SIZE = 20;

	string name[SIZE] = {
		"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim", "Sanchez, Manny", "Rubin, Sarah",
		"Taylor, Tyrone", "Johnson, Jill", "Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
		"Moretti, Bella", "Wu, Eric", "Patel, Renne", "Harrison, Rose", "Smith, Cathy", "Conroy, Pat", "Kelly, Sean",
		"Holland, Beth"
	};

	cout << "Unsorted names:\n";
	for (auto person : name)
		cout << person << endl;
	cout << endl;

	sortAlgo(name, SIZE);

	cout << "Sorted names:\n";
	for (auto person : name)
		cout << person << endl;
	cout << endl;

	system("pause");

	return 0;
}

void sortAlgo(string arr[], int size)
{
	int minIndex;
	string minVal;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minVal = arr[start];
		for (int index = start + 1; index < size; index++)
		{
			if (arr[index] < minVal)
			{
				minVal = arr[index];
				minIndex = index;
			}
		}
		swap(arr[minIndex], arr[start]);
	}
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
