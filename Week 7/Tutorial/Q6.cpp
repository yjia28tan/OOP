// Tutorial 7 Q6

#include<iostream>
using namespace std;

//int doSomething(int &x, int &y)
//{
//	int temp = x;
//	x = y * 10;
//	y = temp * 10;
//	
//	return x + y;
//}
int doSomething(int*x, int*y)
{
	int temp = *x;
	*x = *y * 10;
	*y = temp * 10;
	
	return *x + *y;
}

int main()
{
	int num1 = 12, num2 = 203;
	cout<<doSomething(&num1, &num2)<<endl;
	return 0;
}
