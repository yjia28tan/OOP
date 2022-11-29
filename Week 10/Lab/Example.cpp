#include<iostream>
using namespace std;
#define SIZE 5
int A[SIZE];//declared an integer array called A
int top=-1;

//function to check whether or not the stack is empty 
bool isEmpty()
{
	if(top==-1)
	return true; //stack is confirmed empty
	else 
	return false; //stack is not empty 
}

//push fucntion
void push(int value)
{
  if(top==SIZE-1)//size-1 means already full
  {
  	cout<<"Stack is full!\n";
  }	
  else //if the stack is not full 
  {
  	top = top +1;//u can write top++ same meaning
  	A[top]=value;
  }
  
}

//pop function 
void pop(int value)
{
	if(isEmpty())//if the stack is empty --TRUE
	 cout<<"Stack is empty nothing to delete";
	else 
	  top--;//get the top to point to the prev number
}

void displayStack()//print out all elements of the stack 
{
	if(isEmpty())
	{
	  cout<<"Stack is empty.nothing to display";
	}
	else 
	{
	  //go through each element of the array to 
	  //print
	  for(int i=0; i<=top; i++)
		{
		  cout<<"Value for element A"<<i<<"is "<<A[i]<<endl;
		}
		
	}
	
}
void show_top()
{
	if(isEmpty())//check if stack is empty 
	{
		cout<<"The stack is empty";
	}
	else 
	{
		cout<<"the top value is "<<A[top]<<endl;
	}
	
}
int main ()
{
	//lets say you want to create a menu 
	int choice, flag=1,value;
	while(flag==1)
	{
	  cout<<"Welcome to my system ";
	  cout<<"1.push 2.pop 3.show 4.display stack 5.exit\n";
	  cin>>choice;
	  switch(choice)
	  {
	  	case 1:
	  		cout<<"enter value";
	  		cin>>value;
	  		push(value);
	  		break;
		case 2:
			pop(value);
			break;
		case 3:
			show_top();
			break;
		case 4:
			displayStack();
			break;
		case 5:
			flag=0;
			break;
	  } //end of switch case 
	} //end of while
	return 0;
}
