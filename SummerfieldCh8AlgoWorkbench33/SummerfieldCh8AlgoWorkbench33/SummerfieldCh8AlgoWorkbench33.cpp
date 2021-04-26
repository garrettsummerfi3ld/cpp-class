#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	const int SIZE = 12;

	struct CountryInfo
	{
		string name;
		long population;
	};

	CountryInfo country_info[SIZE];

	ofstream output;

	for (int i = 1; i < SIZE; i++)
	{
		cout << "Enter a country name:" << endl;
		getline(cin, country_info[i].name);

		cout << "\nEnter the population of " << country_info[i].name << ":" << endl;
		cin >> country_info[i].population;
		cin.ignore();
		cout << endl;
	}

	cout << "\nHere are the country names you entered:\n";

	output.open("pop.dat");
	for (int i = 1; i < SIZE; i++)
	{
		cout << setw(20) << country_info[i].name << " : " << setw(10) << country_info[i].population << endl;
		output << setw(20) << country_info[i].name << " : " << setw(10) << country_info[i].population << endl;
	}

	output.close();

	system("pause");

	return 0;
}
