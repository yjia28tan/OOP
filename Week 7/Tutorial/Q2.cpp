// Tutorial 7 Q2

#include<iostream>
using namespace std;

template<class T>
class Rectangle
{
	private:
//		double width;
//		double length;
		T width;
		T length;
	public:
//		void setData(double w, double l) // without template 
//		{
//			width = w, length = l;
//		}
		void setData(T w, T l)
		{
			width = w, length = l;
		}
		
//		double getWidth() // without template
//		{
//			return width;
//		}
		T getWidth()
		{
			return width;
		}
		
//		double getLength() // without template
//		{
//			return length;
//		}
		T getLength()
		{
			return length;
		}
		
//		double getArea() // without template
//		{
//			return width * length;
//		}
		T getArea()
		{
			return width * length;
		}
};

int main()
{	
	// Rectangle rect1; // without template T
	Rectangle<double>rect1;
	rect1.setData(8.0, 9.9);
	cout<<"Rectangle (in double)"<<endl;
	cout<<"Width: "<<rect1.getWidth()<<endl;
	cout<<"Length: "<<rect1.getLength()<<endl;
	cout<<"Area: "<<rect1.getArea()<<endl;
	
	Rectangle<int>rect2;
	rect2.setData(8, 19);
	cout<<"Rectangle (in int)"<<endl;
	cout<<"Width: "<<rect2.getWidth()<<endl;
	cout<<"Length: "<<rect2.getLength()<<endl;
	cout<<"Area: "<<rect2.getArea()<<endl;
	return 0;
}
