#include <iostream>

using namespace std;

class Inventory
{
private:
	string prodID = "P000000000";
	string prodDescription = "PLACEHOLDER DESCRIPTION";
	int qtyInStock = 0;

public:
	Inventory(string inputProdID, string inputProdDescription, int inputQtyInStock)
	{
		prodID = inputProdID;
		prodDescription = inputProdDescription;
		qtyInStock = inputQtyInStock;
	}
};

int main()
{
	cout << "Hello World!\n";
}
