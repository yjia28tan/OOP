// Specification file for the Square class.
#ifndef SQUARE_H
#define SQUARE_H

// Square class declaration.

class Square
{
	private:
		float side;
	public://can access from inside or outside of theclass
		Square();//constructor method //can use to initialize anything
    	void setSide(float length); //mutator methods -->updates private variables
    	float findArea();//accessor methods --> reads private variables 
    	float findPerimeter();
};

#endif

