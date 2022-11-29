// Tutorial 7 Q3

#include<iostream>
using namespace std;

template<class T>
T Minimum(T a, T b)
{
	return (a<b) ? a:b;
}

template<class T>
T Maximum(T a, T b)
{
	return (a>b) ? a:b;
}

int main()
{
	long num1 = 7, num2 = 3;
	cout<<Maximum<int>(1,2)<<endl;
	cout<<Maximum<double>(4.5, 8.6)<<endl;
	cout<<Maximum<long>(num1, num2)<<endl;
	
	cout<<Minimum<int>(1,2)<<endl;
	cout<<Minimum<double>(4.5, 8.6)<<endl;
	cout<<Minimum<long>(num1, num2)<<endl;
	
	return 0;
}
