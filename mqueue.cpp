/*
class implementing queue in C++
the same functionality as STL (Standard Template Library) class queue in C++
with usage example
version 1.4
Consists
a. program template
b. definition of class mqueue
c. constructor
d. empty() method
e. push() method
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
	
	
	private:
	vector<int> elements;
	int first, last;
};
int main() 
{
	mqueue payments;
	cout<< "a1: empty?:" << payments.empty() << "\n";
	payments.push(5);
	cout << "a2: empty?:" << payments.empty() << "\n";
	return 0;
}