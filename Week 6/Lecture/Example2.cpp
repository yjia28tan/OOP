// Week 6 Example 2

#include <iostream>
#include <string>
using namespace std;

// declare your class
class Car
{
	public:
		string brand;
		string model;
		int year;
		
		Car() // constructor without arguments
		{
			brand = "default";
			model = "default";
			year = 2022;
		}
		
		Car(string b, string m, int y) // constructor method
		{
			brand = b;
			model = m;
			year = y;
		}
		void displayCar()
		{
			cout<<"Brand: "<<brand <<" ";
			cout<<"Model: "<<model <<" ";
			cout<<"Year "<<year<<endl;
		}
};

int main() 
{
	Car myCar("BMW", "X5", 1999); // creating object
	// show default value
	myCar.displayCar();
	
	myCar.brand = "Perodua";
	myCar.model = "Myvi";
	myCar.year = 2020;
	// display with updated value
	myCar.displayCar();
	
	Car myCar2; // creating an object using constructor without arguments
	myCar2.displayCar();
	
	myCar2.brand = "Proton";
	//myCar2.model = "Saga";
	myCar2.year = 2016;
	myCar2.displayCar();
	
	Car DreamCar; // creating an object using constructor without arguments
	DreamCar.displayCar();
	
	DreamCar.brand = "Mercedes";
	DreamCar.model = "C200";
	DreamCar.displayCar();
	
	return 0;
}
