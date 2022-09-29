// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

#include <iostream>
#include "Square.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Square box;	// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square

	// FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
	// SIDE OF THE SQUARE. (This is stored in size)
	cout<<"What is the length of the side of the square?"<<endl;
	//cin>> size;
	
	// FILL IN THE CODE THAT CALLS SetSide.
	//box.setSide(size);
	
	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN.
	cout << "Area: " << box.findArea() << endl;

	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
	cout<<"Perimeter: "<<box.findPerimeter()<<endl;
	cout<<"----------------------------------------------"<<endl;

	// Box 1
	Square box1;
	box1.setSide(3);
	cout<<"Box 1"<<endl;
	cout << "Area: " << box1.findArea() << endl;
	cout<<"Perimeter: "<<box1.findPerimeter()<<endl;
	cout<<"----------------------------------------------"<<endl;
	
	// Box 2
	Square box2;	
	box2.setSide(4);
	cout<<"Box 2"<<endl;
	cout << "Area: " << box2.findArea() << endl;
	cout<<"Perimeter: "<<box2.findPerimeter()<<endl;
	cout<<"----------------------------------------------"<<endl;
	
	// Box 3
	Square box3;		
	box3.setSide(5);
	cout<<"Box 3"<<endl;
	cout << "Area: " << box3.findArea() << endl;
	cout<<"Perimeter: "<<box3.findPerimeter()<<endl;
	
	
	
	return 0;
}

