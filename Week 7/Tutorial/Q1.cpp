// Tutorial 7 Q1

#include<iostream>
using namespace std;

//double half(int number)
//{
//	return number / 2.0;
//}

template<class T>
T half(T number)
{
	return number/2.0;
}

int main()
{
	int a;
	double b;
	long c;
	a = 101;
	cout<<half(a)<<endl;
	b = 12.1;
	cout<<half(b)<<endl;
	c = 18.9;
	cout<<half(c)<<endl;
	return 0;
}
