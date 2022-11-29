// Revision 3 (Week 13) 
// Iterator

#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };
	
	// Declaring iterator to a vector
	vector<int>::iterator ptr;
	
	// Displaying vector elements using begin() and end()
	cout << "The vector elements are : ";
	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
		cout << *ptr << " ";
	
	return 0;	
}

