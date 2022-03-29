/*
class implementing queue in C++
the same functionality as STL (Standard Template Library) class queue in C++
with usage example
version 1.2
Consists
a. program template
b. definition of class mqueue
c. constructor
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
		cout << "Jestem 1\n";
		first = last = -1;
		cout<< "Jestem 2\n";
	}
	private:
	vector<int> elements;
	int first, last;
};
int main() 
{
	mqueue payments;
	mqueue payments2;
	return 0;
}