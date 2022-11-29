// Add node in front
#include<iostream>
using namespace std;
struct Node 
	{
		int data;
		Node *next;
		Node(int x)
		{
			data = x;
			next=NULL;
		}
	};

Node * appendNodeInFront(Node *head,int num)
{
	Node *latestNode = new Node(num);
	latestNode->next= head;
	return latestNode;	
}

void printList(Node *node)//starting from any node
//same code as example 1
{
	if(node==NULL)//if the node you passed in parameter is head and head is null
	//then the list is empty 
	{
		cout<<"The list is empty.Nothing to print";
	}
	while(node!=nullptr)
	{
		cout<<node->data<<endl;
		node=node->next;
	}
}
		
int main()
{
	//lets create a linked list adding items from the front 
	
	Node *head = nullptr; //this is head pointer pointing to nothing 
	head=appendNodeInFront(head,10);
	head=appendNodeInFront(head,20);
	head=appendNodeInFront(head,30);
	head=appendNodeInFront(head,40);
	head=appendNodeInFront(head,50); // the last node declare is at the head
	printList(head);//print all the nodes one by one
	return 0;
}
