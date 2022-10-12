// Week 6 Example 1 Class

#include <iostream>
using namespace std;

// declare your class
class myClass
{
	public:
		void myMethod(); // method of myClass
};

// implementation of my method done seperately
void myClass::myMethod()
{
	cout<<"Hello World";
}

int main() 
{
	myClass myObj; // creating object
	myClass myOtherObject;
	myObj.myMethod(); // object calling Method
	myOtherObject.myMethod();
	
	return 0;
}
