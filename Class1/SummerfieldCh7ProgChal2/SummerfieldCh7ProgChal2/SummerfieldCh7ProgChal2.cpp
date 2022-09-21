#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct MovieData
{
	string title, director;
	int releaseYear, runTime;
};


int main(){
	MovieData movStruct1, movStruct2;

	cout << "Input the title of Movie 1:" << endl;
	getline(cin, movStruct1.title);

	cout << "Input the director of Movie 1:" << endl;
	getline(cin, movStruct1.director);

	cout << "Input the release year of Movie 1:" << endl;
	cin >> movStruct1.releaseYear;

	cout << "Input the running time in minutes of Movie 1:" << endl;
	cin >> movStruct1.runTime;

	cout << "Input the title of Movie 2:" << endl;
	cin.ignore();
	getline(cin, movStruct2.title);

	cout << "Input the director of Movie 2:" << endl;
	getline(cin, movStruct2.director);

	cout << "Input the release year of Movie 2:" << endl;
	cin >> movStruct2.releaseYear;

	cout << "Input the running time in minutes of Movie 2:" << endl;
	cin >> movStruct2.runTime;

	cout << "\nMovie 1\nTITLE: " << movStruct1.title << "\nDIRECTOR: " << movStruct1.director << "\nYEAR: " << movStruct1.releaseYear << "\nTIME: " << movStruct1.releaseYear << endl;
	cout << "\nMovie 2\nTITLE: " << movStruct2.title << "\nDIRECTOR: " << movStruct2.director << "\nYEAR: " << movStruct2.releaseYear << "\nTIME: " << movStruct2.releaseYear << endl;

	system("pause");

	return 0;
}