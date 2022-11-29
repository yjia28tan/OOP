// Revision Q3
#include<iostream>
using namespace std;
int main()
{
	int num[5]={10, 11, 12, 13, 14};	
	int sum = 0;
	for (int i=0; i<5; i++)
	{
		sum = sum + num[i];
	}
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
