#include <iostream>

using namespace std;

int main()
{
	int books, points = 0;
	
    cout << "Book Points Calculator\nHow many books have you purchased this month? ";
	cin >> books;

	if (books >= 0)
	{
		if (books == 1)
		{
			cout << "You have been awarded 5 points!";
		}
		else if (books == 2)
		{
			cout << "You have been awarded 15 points!";
		}
		else if (books == 3)
		{
			cout << "You have been awarded 30 points!";
		}
		else if (books >= 4)
		{
			cout << "You have been awarded 50 points!";
		}
		else
		{
			cout << "You haven't purchased any books, or you tried inputting something that is not a number.\nPurchase books to earn points!";
		}
	}
	else if (books <= 0)
	{
		cout << "You can't enter negative numbers!";
	}

	return 0;
}
