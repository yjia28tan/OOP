// Tutorial 6 Q2,Q3

#include<iostream>
using namespace std;

class Shape
{
	protected:
		int width;
		int height;
	public:
		Shape(int w, int h)
		{
			w = 0;
			h = 0;
		}
		void setWidth(int w)
		{
			width = w;
		}
		int getWidth()
		{
			return width;
		}
		
		void setHeight(int h)
		{
			height = h;
		}
		int getHeight()
		{
			return height;
		}
};

class Rectangle : public Shape
{
	public:
		Rectangle(int width, int height):Shape(width, height)
		{
		}
		
		int getArea()
		{
			return (width * height);
		}
};

// Q3 Triangle
class Triangle : public Shape
{
	public:	
		Triangle(int width, int height):Shape(width, height)
		{
		}	
		int getArea()
		{
			return (width * height / 2);
		}
};

int main()
{
	// Rectangle
	Rectangle rectangle1(0, 0);
	rectangle1.setHeight(5);
	rectangle1.setWidth(20);
	rectangle1.getHeight();
	rectangle1.getWidth();
	cout<<"The area of the rectangle is "
	<<rectangle1.getArea()<<endl;
	// Triangle
	Triangle triangle1(0, 0);
	triangle1.setHeight(12);
	triangle1.setWidth(13);
	triangle1.getHeight();
	triangle1.getWidth();
	cout<<"The area of the triangle is "<<triangle1.getArea()<<endl;
	
	return 0;
}
