#include <iostream>
#include <string>

using namespace std;

/**
 * \brief Class for palindrome testing
 */
class Pstring
{
	private:
		string strVal;
	public:
		Pstring(string s);
		bool isPalindrome();
};

/**
 * \brief Constructor for Pstring class
 * \param s Input string for Pstring
 */
Pstring::Pstring(string s)
{
	strVal = s;
}

/**
 * \brief Checks if string is a palindrome
 * \return True if string is a palindrome, false otherwise
 */
bool Pstring::isPalindrome()
{
	// Initial variables, one side is beginning of the string, other side is end of string
	int i = 0;
	int j = strVal.length() - 1;

	// Loop through string
	while (i < j)
	{
		// If the characters of opposite ends are not same, return false immediately
		if (strVal[i] != strVal[j])
			return false;

		// Increment i and decrement j
		i++;
		j--;
	}
	return true;
}

/**
 * \brief Main function
 * \return Graceful program exit (0)
 */
int main()
{
	// Initial variables
	string str;

	// Get string from user
	cout << "Enter a string: ";
	cin >> str;

	// Create Pstring object
	Pstring pal(str);

	// Check if string is a palindrome and output results
	if (pal.isPalindrome())
		cout << "The string is a palindrome." << endl;
	else
		cout << "The string is not a palindrome." << endl;

	return 0;
}
