// Tutorial 7 Q5

#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

// Function prototype
void sorted(vector<double>temperature);
void average(vector<double>temperature);

int main()
{
	vector<double>temperature;
	
	double numTempValue = 1;
	double tempAverage;

	while (numTempValue > 0)
	{
		
		cout << "The number cannot be negative.\nEnter 0 to stop\n";
		cout << "Enter another number: ";
		cin >> numTempValue;
		temperature.push_back(numTempValue);
	}
	

	// Displaying result
	cout << "The temperature in ascending order: \n";
	cout << " Temperature" << endl;
	sorted(temperature);
	cout << " -------- " << endl;
	average(temperature);
	
	return 0;
}

void sorted(vector<double>temperature)
{
	
	std::sort(temperature.begin(), temperature.end());
	for (int i = 0; i = temperature.size(); i++)
	{
		cout<<" "<<temperature[i];
	}
}

void average(vector<double>temperature)
{
	double sum = 0;
	for (int i = 0; i = temperature.size(); i++)
	{
		sum = sum + temperature[i];
	}
	double average = sum / (temperature.size());
	cout << "Avrage temperature: "<< average << endl;
}
