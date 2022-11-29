#include<iostream>
#include<string>

using namespace std;

class Student
{
	private:
		string name;
		int id;
		string course;
	public:
		Student(string n, int i, string c)
		{
			name = n;
			id = i;
			course = c;
		}
		void setName(string n)
		{
			name = n;
		}
		string getName()
		{
			return name;
		}
		void setID(int i)
		{
			id = i;
		}
		int getID()
		{
			return id;
		}
		void setCourse(string c)
		{
			course = c;
		}
		string getCourse()
		{
			return course;
		}		
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Course: "<<course<<endl;
		}
};

class UndergradStudent : public Student
{
	private:
		string private_tutor;
	public:
		UndergradStudent(string name, int id, string course, string p):Student(name, id, course)
		{
			private_tutor = p;
		}
		void setTutor(string p)
		{
			private_tutor = p;
		}
		string getTutor()
		{
			return private_tutor;
		}
};

int main()
{
	cout<<" Student 1 "<<endl;
	UndergradStudent student("Yi Jia", 12, "Computer Science", "Lay");
//	cout<<student.display();
//	student.setName("Yi Jia");
	cout<<"Name: "<<student.getName()<<endl;
//	student.setID(12);
	cout<<"ID: "<<student.getID()<<endl;
//	student.setCourse("Computer Science");
	cout<<"Course: "<<student.getCourse()<<endl;
//	student.setTutor("Lay");
	cout<<"Private tutor: "<<student.getTutor()<<endl;
	return 0;
}
