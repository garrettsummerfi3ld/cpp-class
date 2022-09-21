#include <iostream>

using namespace std;

void display(int, double, char);

int main()
{
	int age = 0;
	double income = 3.14;
	char initial = 'G';

	display(age, income, initial);
	
}

void display(int arg1, double arg2, char arg3)
{
	cout << "Here are the values: " << arg1 << " " << arg2 << " " << arg3 << endl;
}
