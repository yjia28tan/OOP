#include <iostream>
#include "Rectangle.h"  // Needed for Rectangle class
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Rectangle box;    // Define an instance of the Rectangle class
					  // box is object of Rectangle
   double rectWidth;  // Local variable for width
   double rectLength; // Local variable for length

   // Get the rectangle's width and length from the user.
   cout << "This program will calculate the area of a\n";
   cout << "rectangle. What is the width? ";
   cin >> rectWidth;
   cout << "What is the length? ";
   cin >> rectLength;

   // Store the width and length of the rectangle
   // in the box object.
   box.setWidth(rectWidth);
   box.setLength(rectLength);

   // Display the rectangle's data.
   cout << "Here is the rectangle's data:\n";
   cout << "Width: " << box.getWidth() << endl; 	// nameOfObject.function
   cout << "Length: " << box.getLength() << endl;
   cout << "Area: " << box.getArea() << endl;
   cout<<"Perimeter:"<<box.getPerimeter()<<endl;
   cout<<"----------------------------------------------"<<endl;
   
   Rectangle box2;
   box2.setWidth(100);//i am hard coding the length and width
   box2.setLength(50);//did not ask the user 
   cout<<"This is box 2 data"<< endl;
   cout<<"The length is "<<box2.getLength()<< endl;
   cout<<"The width is " <<box2.getWidth()<< endl;
   cout<<"The area for box2 is " <<box2.getArea()<< endl;
   cout<<"The perimeter for box 2 is "<<box2.getPerimeter()<<endl;
    cout<<"----------------------------------------------"<<endl;
    
    Rectangle box3;
    cout<<"This is box 3 data"<< endl;
    cout<<"The default length is "<<box3.getLength()<<endl;
    cout<<"the default width is " <<box3.getWidth()<<endl;
    //change the box 3 length and width to 5
	box3.setLength(5);
	box3.setWidth(5);
    //display the new width and length
    cout<<"The new length is "<<box3.getLength()<<endl;
    cout<<"the new width is "<<box3.getWidth()<<endl;
    cout<<"the perimeter for box3 is "<<box3.getPerimeter()<<endl;
    
	return 0;
}
