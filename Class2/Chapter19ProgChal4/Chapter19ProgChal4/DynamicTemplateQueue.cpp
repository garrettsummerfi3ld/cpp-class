#include "DynamicTemplateQueue.h"
#include <iostream>

using namespace std;

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
