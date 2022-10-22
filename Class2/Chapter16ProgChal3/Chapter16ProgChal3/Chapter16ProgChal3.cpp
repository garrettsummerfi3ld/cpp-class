#include <iostream>

using namespace std;

/**
 * \brief Checks which value is the minimum of two values
 * \tparam T Template
 * \param a Input 1
 * \param b Input 2
 * \return Minimum of a and b
 */
template <class T>
T Min(T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
}

/**
 * \brief Checks which value is the maximum of two values
 * \tparam T Template
 * \param a Input 1
 * \param b Input 2
 * \return Maxmimum of a and b
 */
template <class T>
T Max(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}


/**
 * \brief Test driver program demonstrating the use of the Min and Max functions
 * \return Graceful program exit
 */
int main()
{
	// Integer checking
	int a = 5, b = 10;
	cout << "Min(" << a << ", " << b << ") = " << Min(a, b) << endl;
	cout << "Max(" << a << ", " << b << ") = " << Max(a, b) << endl;

	// Double checking
	double c = 5.5, d = 10.5;
	cout << "Min(" << c << ", " << d << ") = " << Min(c, d) << endl;
	cout << "Max(" << c << ", " << d << ") = " << Max(c, d) << endl;

	// String checking
	string e = "Hello", f = "World";
	cout << "Min(" << e << ", " << f << ") = " << Min(e, f) << endl;
	cout << "Max(" << e << ", " << f << ") = " << Max(e, f) << endl;

	// Float checking
	float g = 5.5f, h = 10.5f;
	cout << "Min(" << g << ", " << h << ") = " << Min(g, h) << endl;
	cout << "Max(" << g << ", " << h << ") = " << Max(g, h) << endl;

	// Char checking
	char i = 'a', j = 'b';
	cout << "Min(" << i << ", " << j << ") = " << Min(i, j) << endl;
	cout << "Max(" << i << ", " << j << ") = " << Max(i, j) << endl;

	// Long checking
	long k = 5, l = 10;
	cout << "Min(" << k << ", " << l << ") = " << Min(k, l) << endl;
	cout << "Max(" << k << ", " << l << ") = " << Max(k, l) << endl;

	// Bool checking
	bool m = true, n = false;
	cout << "Min(" << m << ", " << n << ") = " << Min(m, n) << endl;
	cout << "Max(" << m << ", " << n << ") = " << Max(m, n) << endl;


	return 0;
}