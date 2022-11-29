// Revision 2 Q2
#include <iostream>
using namespace std;
void func1()
{
	cout << "Able was I\n";
}
void func2()
{
	cout << "I saw Elba\n";
}

int main()
{
	int input;
	cout << "Enter a number: ";
	cin >> input;
	if (input < 10)
	{
		func1();
		func2();
	}
	else
	{
		func2();
		func1();
	}
	return 0;
}
