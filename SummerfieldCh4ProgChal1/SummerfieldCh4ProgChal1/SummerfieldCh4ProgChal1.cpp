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
			points += 5;
		}
		else if (books == 2)
		{
			points += 15;
			cout << "You have been awarded 15 points!";
		}
		else if (books == 3)
		{
			points += 30;
			cout << "You have been awarded 30 points!";
		}
		else if (books >= 4)
		{
			points += 50;
			cout << "You have been awarded 50 points!";
		}
		else
		{
			cout << "You haven't purchased any books!\nPurchase books to earn points!";
		}
	}
	else if (books <= 0)
	{
		cout << "You can't enter negative numbers!";
	}
	else
	{
		cout << "You must enter a number!";
	}

	return 0;
}
