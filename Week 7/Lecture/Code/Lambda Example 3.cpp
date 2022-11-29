#include <iostream>
using namespace std;

int main() {

  int num = 0;

  cout << "Initially, num = " << num << endl;
  
  // [&num] captures num by reference
  auto increment_by_one = [&num] () {
    cout << "Incrementing num by 1.\n";
    num++;
  };

  // invoke lambda function
  increment_by_one();

  cout << "Now, num = " << num << endl;

  return 0;
}
