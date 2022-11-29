// Tutorial 7 Q4
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void sort(double*, int);  
double average(double*, int); 

int main()
{
	int numTemperatureValue = 0;			
	double *temperatureValuePtr = 0;	
	double temperatureAverage = 0;	
			
	cout << "\nHow many temperature value will you enter? ";
	cin >> numTemperatureValue;
   
	// Validate the input.
	while (numTemperatureValue < 0)
	{
		cout << "The number cannot be negative.\n";
		cout << "Enter another number: ";
		cin >> numTemperatureValue;
	}
	temperatureValuePtr = new double[numTemperatureValue];

	for (int i = 0; i < numTemperatureValue; i++)
	{
		// Get a test score.
		cout << "Enter temperature value " << (i + 1) << ": ";
		cin >> temperatureValuePtr[i];
      
		// Validate the input.
		while (temperatureValuePtr[i] < 0)  
		{
			cout << "Negative temperature are not allowed.\n";
			cout << "Enter another temperature for this test: ";
			cin >> temperatureValuePtr[i];
		}
	}
	sort(temperatureValuePtr, numTemperatureValue);


	temperatureAverage = average(temperatureValuePtr, numTemperatureValue);

	// Display the resulting data.
	cout << "\nThe temperature in ascending "
	     << "order, and their average, are:\n\n";
	cout << " Temperature" << endl;
	cout << " -----" << endl;
   
	for (int j = 0; j < numTemperatureValue; j++)
	{
		cout << "\n" << fixed << setprecision(2) 
		     << setw(6) << temperatureValuePtr[j];
	}

	cout << "\n\nAverage temperature:  " << setprecision(2)
	     << fixed << temperatureAverage << endl << endl;

	// Free the dynamically-allocated memory.
	delete [] temperatureValuePtr;
	temperatureValuePtr = 0;
   
	return 0;
}


void sort(double* score, int size)
{
	int startScan, minIndex; 
	double minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = score[startScan];

		for(int index = startScan + 1; index < size; index++)
		{
			if (score[index] < minValue)
			{
				minValue = score[index];
				minIndex = index;
			}
		}

		score[minIndex] = score[startScan];
		score[startScan] = minValue;
	}
}

double average(double* score, int numScores)
{
	double total = 0; // Accumulator

	// Calculate the total of the scores.
	for (int k = 0; k < numScores; k++)
		total += score[k];
   
	// Return the average score.
	return (total / numScores);
}
