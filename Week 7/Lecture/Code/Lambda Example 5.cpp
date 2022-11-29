#include <iostream>
using namespace std;

int main() {
	// lambda function start with 'auto'
	auto display = [] (auto s) { 
	cout << s << endl;
	};
	
	display(1);
	display(2.5);
	display("Kathmandu");
	  
	return 0;
}
