#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 25;

	int arr1[SIZE] = {
		5, 1, 3, 6, 4, 8, 31, 48, 43, 9, 846, 49, 47, 1969, 981, 324, 18915, 156, 165, 54689, 165498, 1657841, 4, 2, 6
	};
	int arr2[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr2[i] = arr1[i];
	}
	for (int j : arr2)
	{
		cout << j << endl;
	}
}
