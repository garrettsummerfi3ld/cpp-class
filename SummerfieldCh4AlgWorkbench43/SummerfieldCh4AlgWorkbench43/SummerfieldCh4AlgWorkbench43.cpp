#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int commission;
	float sales;
	
	cout << "Input the sales made: ";
	cin >> sales;

	if (sales < 10000)
	{
		commission = 10;
	}
	else if (sales >= 10000 && sales <= 15000)
	{
		commission = 15;
	}
	else if (sales < 15000)
	{
		commission = 20;
	}

	cout << "Sales commission: " << showpoint << setprecision(2) << commission << "%" << endl;

	return 0;
}