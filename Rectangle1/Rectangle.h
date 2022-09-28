// Specification file for the Rectangle class.
#ifndef RECTANGLE_H
#define RECTANGLE_H

// Rectangle class declaration.

class Rectangle
{
   private://means cannot access from outside the class
   	  //both the variables are private 
   	  //the only way to update these variables is using the getter and setter methods 
   	  //set width, set length will allow length and width be updated
   	  //get width and get length will allow reading the values of the variable
      double width;
      double length;
   public://can access from inside or outside of theclass
      Rectangle();//constructor method //can use to initialize anything
      void setWidth(double); //mutator methods -->updates private variables
      void setLength(double);//mutator methods -->updates private variables
      double getWidth() const;//accessor methods --> reads private variables 
      double getLength() const;//accessor methods --> reads private variables 
      double getArea() const;//accessor methods --> reads private variables 
      double getPerimeter() const;
};

#endif
