#include <iostream>

using namespace std;

/**
 * \brief Class for linked lists
 */
class LinkedList
{
private:
	/**
	 * \brief A structure for the list
	 */
	struct ListNode
	{
		double data;
		ListNode* next;
	};

	ListNode* head;
public:
	/**
	 * \brief LinkedList constructor
	 */
	LinkedList()
	{
		head = new ListNode;
		head->data = NULL;
		head->next = NULL;
	}

	/**
	 * \brief Adds a value to the end of the list
	 * \param x Double value
	 */
	void add(double x)
	{
		ListNode* temp = head;
		head = new ListNode;
		head->next = temp;
		head->data = x;
	}

	/**
	 * \brief Checks if a value is a member of the linked list
	 * \param x Inputs a value to check if this value is in the linked list
	 * \return True if value is a member of a linked list, false if not a member
	 */
	bool isMember(double x)
	{
		ListNode* temp = head;
		while (temp->data != NULL)
		{
			if (temp->data == x)
			{
				//the value is in the list
				return true;
			}
			temp = temp->next;
		}
		return false;
	}
};

/**
 * \brief Test harness for the linked list class
 * \return Graceful exit
 */
int main()
{
	LinkedList listNodes;

	// Add values to a list
	listNodes.add(1.1);
	listNodes.add(2.2);
	listNodes.add(3.3);
	listNodes.add(4.4);
	listNodes.add(5.5);
	listNodes.add(6.6);
	listNodes.add(7.7);

	// Check if a value is a member of the list
	if (listNodes.isMember(1.1))
	{
		cout << "This element is a member of the list"<< endl;
	}
	else
	{
		cout << "Element is not a member of the list" << endl;
	}
	
	return 0;
}
