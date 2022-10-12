// Tutorial 6 Q1

#include<iostream>
#include<string>

using namespace std;

class Student
{
	private:
		string name;
		int age;
		char gender;
	
	public:
//		Student(int a,string n, char g) 
//		{
//			age = a;
//			name = n;
//			gender = g;
//		}
//		
		string getName()
		{
			return name;
		}
		void setName(string n)
		{
			name = n;
		}
		
		int getAge()
		{
			return age;
		}
		void setAge(int a)
		{
			age = a;
		}
		
		char getGender()
		{
			return gender;
		}
		void setGender(char g)
		{
			gender = g;
		}
		
		void display()
		{
			cout<<"Name: "<<name <<endl;
			cout<<"Age: "<<age <<endl;
			cout<<"Gender "<<gender <<endl;
		}
};

int main()
{
	Student student1;
	student1.setName("Yi Jia");
	student1.getName();
	student1.setAge(21);
	student1.getAge();
	student1.setGender('F');
	student1.getGender();
	student1.display();
	
	return 0;
}
