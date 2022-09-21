#include <iostream>

using namespace std;

class Inventory
{
public:
	string prodID = "P000000000";
	string prodDescription = "PLACEHOLDER DESCRIPTION";
	int qtyInStock = 0;
	Inventory(string inputProdID, string inputProdDescription, int inputQtyInStock)
	{
		prodID = inputProdID;
		prodDescription = inputProdDescription;
		qtyInStock = inputQtyInStock;
	}

	void Remove(string inputProdID, int inputRemoveQty);
};

void Inventory::Remove(string inputProdID, int inputRemoveQty)
{
	prodID = inputProdID;

	if (!(inputRemoveQty - qtyInStock <= -1))
	{
		qtyInStock =- inputRemoveQty;
	}
}


int main()
{
	cout << "Hello World!\n";
}
