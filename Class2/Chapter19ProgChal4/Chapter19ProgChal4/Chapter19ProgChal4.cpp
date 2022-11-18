#include <iostream>

using namespace std;

/**
 * \brief DynamicTemplateQueue class
 * \tparam T Template
 */
template <class T>
class DynamicTemplateQueue
{
	/**
	 * \brief Queue nodes
	 */
	struct QueueNode
	{
		T value;
		QueueNode *next;
		QueueNode(T value1, QueueNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	/**
	 * \brief Front of the queue
	 */
	QueueNode *front;

	/**
	 * \brief Back of the queue
	 */
	QueueNode *rear;
public:
	/**
	 * \brief Constructor
	 */
	DynamicTemplateQueue();

	/**
	 * \brief Destructor
	 */
	~DynamicTemplateQueue();

	/**
	 * \brief Adds value to the back of the queue
	 */
	void enqueue(T);

	/**
	 * \brief Removes value from the back of the queue
	 */
	void dequeue(T &);

	/**
	 * \brief Checks if a queue is empty
	 * \return Returns true if queue is empty, false if not empty
	 */
	bool isEmpty() const;

	/**
	 * \brief Clears a queue
	 */
	void clear();
};

/**
 * \brief DynamicQueue constructor
 */
template <class T>
DynamicTemplateQueue<T>::DynamicTemplateQueue()
{
	front = nullptr;
	rear = nullptr;
}

/**
 * \brief DynamicQueue deconstructor
 */
template <class T>
DynamicTemplateQueue<T>::~DynamicTemplateQueue()
{
	QueueNode* garbage = front;
	while (garbage != nullptr)
	{
		garbage->next = nullptr;
		delete garbage;
		garbage = front;
	}
}

/**
 * \brief Adds a value to the queue
 */
template <class T>
void DynamicTemplateQueue<T>::enqueue(T value)
{
	if (isEmpty())
	{
		front = new QueueNode(value);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(value);
		rear = rear->next;
	}
}

/**
 * \brief Removes a value from the queue
 * \param value Value to be removed
 */
template <class T>
void DynamicTemplateQueue<T>::dequeue(T& value)
{
	QueueNode* temp = nullptr;
	if (isEmpty())
	{
		cout << "Queue is empty." << endl;
		exit(1);
	}
	value = front->value;
	temp = front;
	front = front->next;
	delete temp;
}

/**
 * \brief Checks if a queue is empty
 * \return True if queue is empty, false if not empty
 */
template <class T>
bool DynamicTemplateQueue<T>::isEmpty() const
{
	if (front == nullptr)
	{
		return true;
	}
	return false;
}

/**
 * \brief Clears the whole queue
 */
template <class T>
void DynamicTemplateQueue<T>::clear()
{
	T value;

	while (!isEmpty())
	{
		dequeue(value);
	}
}

/**
 * \brief Test harness for DynamicTemplateQueue
 * \return Graceful program exit
 */
int main()
{
	// Integers test
	cout << "Enqueuing 5 integers..." << endl;
	DynamicTemplateQueue<int> intQueue;

	for (int k = 1; k <= 5; k++)
		intQueue.enqueue(k*k);

	// Deqeue and retrieve all items in the queue
	cout << "The values in the queue were:" << endl;
	while (!intQueue.isEmpty())
	{
		int value;
		intQueue.dequeue(value);
		cout << value << "  ";
	}

	cout << endl;

	// String test
	cout << "Enqueuing 5 strings" << endl;
	DynamicTemplateQueue<string> strQueue;

	strQueue.enqueue("This");
	strQueue.enqueue("is");
	strQueue.enqueue("a");
	strQueue.enqueue("thorough");
	strQueue.enqueue("Test");

	cout << "The values of the queue were:" << endl;
	while (!strQueue.isEmpty())
	{
		string value;
		strQueue.dequeue(value);
		cout << value << " ";
	}

	return 0;
}
