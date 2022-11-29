// Revision
#include<iostream>
using namespace std;

class Product
{
	public:
		int itemNumber;
		int quantity;
		double cost;
		double totalCost;
		
		Product()
		{
			itemNumber = 0;
			quantity = 0;
			cost = 0;
			totalCost = 0;
		}
		Product(int i, int q, double c)
		{
			itemNumber = i;
			quantity = q;
			cost = c;
			setTotalCost(q, c);
		}
		
		void setItemNumber(int i)
		{
			itemNumber = i;
		}
		int getItemNumber()
		{
			return itemNumber;
		}
		
		void setQuatity(int q)
		{
			quantity = q;
		}
		int getQuatity()
		{
			return quantity;
		}
		
		void setCost(double c)
		{
			cost = c;
		}
		double getCost()
		{
			return cost;
		}
		
		void setTotalCost(int q, double c)
		{
			totalCost = cost * quantity;
		}
		double getTotalCost()
		{
			return totalCost;
		}
};

int main()
{
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
	
	cout<<"Enter the Item Number: ";
	cin >> itemNumber;
	while (itemNumber < 0)
	{
		cout << "Please enter a positive value for the Item Number: ";
		cin >> itemNumber;
	}
	
	cout << "Enter the Quantity of the item: ";
	cin >> quantity;
	while (quantity < 0)
	{
		cout << "Please enter a positive value for the Quantity of the item: ";
		cin >> quantity;
	}
	
	cout << "Enter the Cost of the item: ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "Please enter a positive value for the Cost of the item: ";
		cin >> cost;
	}
	
	Product pro(itemNumber, quantity, cost);
	cout<<"Item Number: "<<pro.getItemNumber()<<endl;
	cout<<"Quantity: "<<pro.getQuatity()<<endl;
	cout<<"Cost: "<<pro.getCost()<<endl;
	cout<<"Total Cost: "<<pro.getTotalCost()<<endl;
	cout<<"--------------------"<<endl;
	
//	Product pro1(1, 10, 15.5);
//	// pro1.setItemNumber(1);
//	cout<<"Item Number: "<<pro1.getItemNumber()<<endl;
//	// pro1.setQuatity(2);
//	cout<<"Quantity: "<<pro1.getQuatity()<<endl;
//	// pro1.setCost(19.7);
//	cout<<"Cost: "<<pro1.getCost()<<endl;
//	// pro1.setTotalCost();
//	cout<<"Total Cost: "<<pro1.getTotalCost()<<endl;
	
	return 0;
}
