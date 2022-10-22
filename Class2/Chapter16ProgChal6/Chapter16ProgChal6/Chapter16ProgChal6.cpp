#include <iostream>
#include <vector>

using namespace std;

/**
 * \brief Rotates the contents of the vector to the left by one position
 * \tparam T Template
 * \param v Vector input
 */
template <class T>
void rotateLeft(vector<T>& v)
{
	v.push_back(v[0]);
	v.erase(v.begin());
}

/**
 * \brief Rotates the contents of the vector to the right by one position
 * \tparam T Template
 * \param v Vector input
 */
template <class T>
void rotateRight(vector<T>& v)
{
	v.insert(v.begin(), v[v.size() - 1]);
	v.pop_back();
}

/**
 * \brief Outputs the vector contents to the console
 * \tparam T Template
 * \param v Vector input
 */
template <class T>
void output(vector<T> v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

/**
 * \brief Test harness for the rotateLeft function
 * \return Graceful prorgam exit
 */
int main()
{
	// Integer testing
	cout << "Demonstrating rotateRight with an int vector" << endl;
	vector<int> intList = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < intList.size(); i++)
	{
		output(intList);
		rotateRight(intList);
	}

	cout << "Demonstrating rotateLeft with an int vector" << endl;
	for (int i = 0; i < intList.size(); i++)
	{
	output(intList);
	rotateLeft(intList);
	}


	// Double testing
	cout << "Demonstrating rotateRight with a double vector" << endl;
	vector<double> doubleList = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	for (int i = 0; i < doubleList.size(); i++)
	{
		output(doubleList);
		rotateRight(doubleList);
	}

	cout << "Demonstrating rotateLeft with a double vector" << endl;
	for (int i = 0; i < doubleList.size(); i++)
	{
		output(doubleList);
		rotateLeft(doubleList);
	}

	// String testing
	cout << "Demonstrating rotateRight with a string vector" << endl;
	vector<string> stringList = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
	for (int i = 0; i < stringList.size(); i++)
	{
		output(stringList);
		rotateRight(stringList);
	}

	cout << "Demonstrating rotateLeft with a string vector" << endl;
	for (int i = 0; i < stringList.size(); i++)
	{
		output(stringList);
		rotateLeft(stringList);
	}

	// Character testing
	cout << "Demonstrating rotateRight with a char vector" << endl;
	vector<char> charList = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
	for (int i = 0; i < charList.size(); i++)
	{
		output(charList);
		rotateRight(charList);
	}

	cout << "Demonstrating rotateLeft with a char vector" << endl;
	for (int i = 0; i < charList.size(); i++)
	{
		output(charList);
		rotateLeft(charList);
	}

	return 0;
}
