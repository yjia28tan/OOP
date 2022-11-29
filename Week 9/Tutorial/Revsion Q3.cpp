// Revision Q3
#include<iostream>
using namespace std;

class Product
{
	public:
		int itemNumber;
		int quantity;
		double cost;
		double totalCost;
		//double sum = 0;
		//int size = 5;
		
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
		
		double sumTotalCostArray(int a[], int n, double c)
		{
			double sum = 0;
			
		}
};

class saleItem : public Product
{
//	public:
//		saleItem()
};

int main()
{
//	int itemNumber;
//	int quantity;
//	double cost;
//	double totalCost;
	
	Product a[5] = {Product(1, 12, 10), Product(2, 3, 5), Product(3, 4, 7), Product(4, 5, 6), Product(5, 6, 8)};
	cout<<Product;

//	cout<<" --- Item 1 ---\n";
//	cout<<"Item Number: "<<a[0].getItemNumber()<<endl;
//	cout<<"Quantity: "<<a[0].getQuatity()<<endl;
//	cout<<"Cost: "<<a[0].getCost()<<endl;
//	cout<<"Total Cost: "<<a[0].getTotalCost()<<endl;
//	
//	cout<<"\n --- Item 2 ---\n";
//	cout<<"Item Number: "<<a[1].getItemNumber()<<endl;
//	cout<<"Quantity: "<<a[1].getQuatity()<<endl;
//	cout<<"Cost: "<<a[1].getCost()<<endl;
//	cout<<"Total Cost: "<<a[1].getTotalCost()<<endl;
//	
//	cout<<"\n --- Item 3 ---\n";
//	cout<<"Item Number: "<<a[2].getItemNumber()<<endl;
//	cout<<"Quantity: "<<a[2].getQuatity()<<endl;
//	cout<<"Cost: "<<a[2].getCost()<<endl;
//	cout<<"Total Cost: "<<a[2].getTotalCost()<<endl;
//	
//	cout<<"\n --- Item 4 ---\n";
//	cout<<"Item Number: "<<a[3].getItemNumber()<<endl;
//	cout<<"Quantity: "<<a[3].getQuatity()<<endl;
//	cout<<"Cost: "<<a[3].getCost()<<endl;
//	cout<<"Total Cost: "<<a[3].getTotalCost()<<endl;
//	
//	cout<<" \n --- Item 5 ---\n";
//	cout<<"Item Number: "<<a[4].getItemNumber()<<endl;
//	cout<<"Quantity: "<<a[4].getQuatity()<<endl;
//	cout<<"Cost: "<<a[4].getCost()<<endl;
//	cout<<"Total Cost: "<<a[4].getTotalCost()<<endl;
//	cout<<"-------------------------\n"<<endl;
	
	//cout<<"Total Cost for the five elements is: "<<sumTotalCostArray(a, n)<<endl;

	return 0;
}
