/*
class implementing queue in C++
the same functionality as STL (Standard Template Library) class queue in C++
with usage example
version 1.5
Consists
a. program template
b. definition of class mqueue
c. constructor
d. empty() method
e. push() method
f. dequeue()
Author: Bajadera / WB
*/
#include <iostream>
#include <vector>
using namespace std;

class mqueue
{
	public:
	mqueue() //Constructor
	{
		
		first = last = -1;
		
	}
	bool empty()
	{
		if (first == -1)
			return true;
		return false;
	}
	void push(int value)
	{
		if ( empty() == true )
		{
			elements.push_back(value);
			first = last = 0;
			return;
		}
		elements.push_back(value);
		++last;
		
	}
	int dequeue()
	{
		int value;
		if (empty()) 
		{
			return value;
		}
		if (first == last)
		{
			value = elements[first];
			first = last = -1;
			elements.clear();
			return value;
		}
		value = elements[first];
		++first;
		return value;
	}
	
	private:
	vector<int> elements;
	int first, last;
};
int main() 
{
	mqueue payments;
	int value;
	
	cout<< "empty?:" << payments.empty() << "\n";
	payments.push(5);
	payments.push(-3);
	payments.push(8);
	
	payments.push(5);
	cout << "serviced:" << payments.dequeue() << "\n";
	cout << "serviced:" << payments.dequeue() << "\n";
	cout << "serviced:" << payments.dequeue() << "\n";
	payments.push(11);
	cout << "serviced:" << payments.dequeue() << "\n";
	cout << "serviced:" << payments.dequeue() << "\n";
	cout << "empty?:" <<  payments.empty() << "\n";
	return 0;
}