#include <iostream>
#include <string>

using namespace std;

int main()
{
	string book1, book2;
	cout << "Input book 1: ";
	getline(cin, book1);

	cout << "Input book 2: ";
	getline(cin, book2);
	
	if (book1 < book2)
	{
		cout << book1 << "\n" << book2 << endl;
	}
	else
	{
		cout << book2 << "\n" << book1 << endl;
	}
}
