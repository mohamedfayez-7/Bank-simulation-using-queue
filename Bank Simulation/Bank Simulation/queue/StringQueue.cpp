#include <iostream>
#include "StringQueue.h"
using namespace std;

//creates an empty array=> "queue"
StringQueue::StringQueue(int s)
{
	queueArray = new string[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}


//Destructor
StringQueue:: ~StringQueue()
{
	delete [] queueArray;
}

void StringQueue::enqueue(string element)
{
	if (isFull())
		cout << "the queue is full";
	else
	{

		if (rear == queueSize - 1)
			rear = 0;
		else
		{
			rear++;
		}
		queueArray[rear] = element;
		numItems++;

	}
	
}
void StringQueue::dequeue(string &element)
{
	if (isEmpty())
	{
		cout << "The queue is empty";
	}
	else
	{
		if (front == queueSize - 1)
			front= 0;
		else
		{
			front++;
		}
		element = queueArray[front];
		numItems--;
	}
}
bool StringQueue::isEmpty() const
{
	bool status;
	if (numItems)
		status = false;
	else
	{
		status = true;
	}
	return status;
}

bool StringQueue::isFull() const
{
	bool status;
	if (numItems < queueSize)
	{
		status = false;
	}
	else
	{
		status = true;
	}
	return status;
}

int StringQueue::numOfElems()
{
	return numItems;
}

void StringQueue::clear()
{
	front = queueSize - 1;
	rear = queueSize - 1;
	numItems = 0;

}



