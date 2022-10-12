// Week 6 Example 4

#include <iostream>
using namespace std;
class Car
{
	private:
		string brand;
		string model;
		int year;
	public: 
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
		// brand
		string getBrand() // create an accessor function
		{
			return brand;
		}
		void setBrand(string b) // create a mutator function
		{
			brand = b;
		}
		// model
		string getModel() // create an accessor function
		{
			return model;
		}
		void setModel(string m) // create a mutator function
		{
			model = m;
		}
		// year
		int getYear()
		{
			return year;
		}
		void setYear(int y)
		{
			year = y;
		}
};

int main() 
{
	Car myCar;
	myCar.displayCar();
	// myCar.brand = "Kia"; //cannot update because the brand is private
	myCar.setBrand("Kia");
	cout<<myCar.getBrand()<<endl;
	myCar.setModel("KIA Model");
	cout<<myCar.getModel()<<endl;
	myCar.setYear(2021);
	cout<<myCar.getYear()<<endl;
	return 0;
}
