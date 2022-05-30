#pragma once
#ifndef StringQueue_H
#define StringQueue_H
#include <iostream>
using namespace std;

class StringQueue
{

private:
	string *queueArray;
	int queueSize;
	int front;
	int rear;
	int numItems;

public:
	//constructor
	StringQueue(int);
	//Destructor
	~StringQueue();

	//Queue Operations
	void enqueue(string);
	void dequeue(string &);
	bool isEmpty() const;
	bool isFull() const;
	int numOfElems();
	void clear();


};
#endif