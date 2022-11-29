// Add & delete node at end
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
	
Node * appendNodeAtEnd(Node *head,int num)
{
	Node *latestNode = new Node(num);
	if(head==NULL)//empty link list 
	{
		return latestNode;//this is the first node
	}
	 
	
		Node *curr=NULL;
		//a current pointer is created to move 
		//through the linked list one by one
		//head pointer will always point at head an never move 
		//let the current pointer start from head 
		curr=head;
		//let current move through the linklist until the last link list 
		//last one will be pointing to null 
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		//once you reach the end of the linked list then 
		curr->next=latestNode;
		return head;	
}

void printList(Node *node)//starting from any node
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

Node * deleteNodeAtEnd(Node *head)
{
	if(head==NULL)// Situation 1: empty link list 
	{
		return NULL;//this is the first node
	}
	 
	if(head->next==NULL)// Situation 2: only one node is in the linked list 
	{
		delete head;
		head=NULL; // head become NULL
		return head;
	}
	// Situation 3 linked list with many nodes
	// create a curr pointer
	Node *curr= nullptr;//current pointer to go through the linked list
	curr = head; //current to start at the same position as head
	while(curr->next->next!=NULL)
	{
		curr=curr->next;
	}
	delete(curr->next);
	curr->next=NULL;
	return head;
}

int main()
{
	//lets create a linked list adding items from the back 
	
	Node *head = nullptr; //this is head pointer pointing to nothing 
	head=appendNodeAtEnd(head,10);
	head=appendNodeAtEnd(head,20);
	head=appendNodeAtEnd(head,30);
	head=appendNodeAtEnd(head,40);
	head=appendNodeAtEnd(head,50);
	head=deleteNodeAtEnd(head);//pass the head so that 
	//u can go through on by one and delete the last node 
	printList(head);//print all the nodes one by one
	return 0;
}
