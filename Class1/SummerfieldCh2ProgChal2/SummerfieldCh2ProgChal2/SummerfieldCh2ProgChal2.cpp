#include <iostream>
using namespace std;

double length_feet, width_feet, acres_convert, total_acres;

int main()
{
	length_feet = 869;
	width_feet = 360;
	acres_convert = 43560;

	total_acres = (length_feet * width_feet) / acres_convert;

	cout << "TOTAL ACRES: " << total_acres << endl;
}
