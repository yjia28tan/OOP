// Week 6 Example 3

#include <iostream>
#include <string>
using namespace std;

// declare your class
class Vehicle
{
	public:
		string type;
		double price;

		Vehicle(string t, double p) // constructor method
		{
			type = t;
			price = p;
		}
}; // end of Vehicle

class Car : public Vehicle
{
	public:
		int No_of_Wheels;
		// If need to use method or blabla from parent class 
		// will need to declare the datatype int the constructor
		// Children constructor ( datatype and variables) : parent constructor (variable)
		// Children construtor : Parent construtor 
		Car(string type, double price):Vehicle(type, price)
		{
			No_of_Wheels = 4;
		}
		
		void display()
		{
			cout<<"Car Information"<<endl;
			cout<<"Type: "<<type <<endl;
			cout<<"Price: "<<price<<endl;
		}
}; // end of Car

int main() 
{
	Car myCar("Local", 505050.50);
	myCar.display();
	
	return 0;
}

