#include <iostream>
#include <string>
#include "StringQueue.h"
using namespace std;

void main() {

	StringQueue q(5);
	int cust_served = 0;
	while (true)
	{
		int choice;
		cout << "1- Add new client" << endl;
		cout << "2- Serve current client" << endl;
		cout << "3- Display number of waiting clients" << endl;
		cout << "4- Exit" << endl;
		cin >> choice;
		if (choice == 1)
		{
			string name;
			cout << "Enter customer name"<<endl;
			cin >> name;
			q.enqueue(name);
			cout << "Client " << name << " Added."<<endl;
		}
		else if (choice == 2)
		{
			string name;
			q.dequeue(name);
			cout << "Customer " << name << " has been served!"<<endl;
			cust_served++;
		}
		else if (choice == 3)
		{
			cout << "Number of waiting clients: " << q.numOfElems()<<endl;
		}
		else if (choice == 4)
		{
			break;
		}
		else { 
			cout << "Wrong Choice. Please try again"<<endl; 
		}
	}

	cout<<"Customers Served: "<<cust_served<<endl;
	cout<<"Clients waiting in the queue: "<<q.numOfElems()<<endl;

	system("pause");
}