#include<iostream>
using namespace std;

const double price1 = 10.0;
const double price2 = 15.0;
const double pricePremier = 5.0;
const double priceNormal =0.50;

double calculate(int &d, int &Premier, int &Normal)
{
	double total;
	// 5th Nov
	if (d == 1)
	{
		// Total price for Premier tickets
		double sum1 = (price1 + pricePremier) * Premier;
		// Total price for Normal tickets
		double sum2 = (price1 + priceNormal) * Normal;
		// Total price for both tickets
		total = sum1 + sum2;
//		cout<<"Total Price is "<<total<<endl;
	}
	// 6th Nov
	else if(d == 2)
	{
		// Total price for Premier tickets
		double sum3 = (price2 + pricePremier) * Premier;
		// Total price for Premier tickets
		double sum4 = (price2 + priceNormal) * Normal;
		// Total price for both tickets
		total = sum3 + sum4;
//		cout<<"Total Price is "<<total<<endl;
	}
	else
		cout<<"Error"<<endl;
	
	return total;	
}

void display(double t)
{
	double total = t;
	cout<<"Total Price is "<<total<<endl;
}

int main()
{	
	int date, num_tickets, numPremier, numNormal;
	
	
	cout<<"Welcome to piano recital ticketing system"<<endl;
	cout<<"Which date you want to choose? (1. 5th Nov OR 2. 6th Nov) "<<endl;
	cin>>date;
	while (date < 1 or date > 3)
	{
		cout<<"Please enter 1 OR 2 only "<<endl;
		cin>>date;
	}
	
	cout<<"Please enter the number of tickets"<<endl;
    cin>>num_tickets;
    while (num_tickets > 11 or num_tickets < 1)
    {
    	cout<<"Minimum 1 ticket and Maximum 10 tickets only."<<endl;
    	cout<<"Please enter the number of tickets"<<endl;
    	cin>>num_tickets;
	}
	
	cout<<"\nThere are 2 types of seats which are Premier Seat and Normal Seat."<<endl;
	cout<<"How many premier seat tickets? "<<endl;
	cin>>numPremier;
		
	cout<<"How many normal seat tickets? "<<endl;
	cin>>numNormal;
		
	calculate(date, numPremier, numNormal);
	display(calculate(date, numPremier, numNormal));
	
	return 0;
}
