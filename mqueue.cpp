/*
class implementing queue in C++
the same functionality as STL (Standard Template Library) class queue in C++
with usage example
version 1.3
Consists
a. program template
b. definition of class mqueue
c. constructor
d. empty() method
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
	
	private:
	vector<int> elements;
	int first, last;
};
int main() 
{
	mqueue payments;
	cout<< "empty?:" << payments.empty() << "\n";
	return 0;
}