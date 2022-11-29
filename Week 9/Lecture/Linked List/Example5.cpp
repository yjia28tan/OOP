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
int size = 0;

Node * appendNodeAtBack(Node *head,int num)
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
// Example 1 (Append Node at position 2) 
Node * appendNodeAtPosition(Node *prev_node, int num)
{
	Node *latestNode = new Node(num);
	if(prev_node==NULL)//empty link list 
	{
		return latestNode; //this is the first node
	}
	Node *newNode = new Node(num);
	newNode->data = num;
	newNode->next = prev_node->next;
	prev_node->next = newNode; 
}

// Example 2
// required for Add Node Between Any Node
int getCurrSize(struct Node* head)
{
    int size = 0;

    while(head != NULL)
	{
        head = head->next;
        size++;
    }
    return size;
}

Node * appendNodeAtAnyPosition(Node *head, int num, int pos)
{
	int size = getCurrSize(head);
	
	Node *newNode = new Node(num);
	newNode->data = num;
	newNode->next =	NULL;
	
	if(head==NULL)//empty link list 
		return newNode;//this is the first node
	
	if(pos < 0 || pos > size)
		cout<<"Invalid position to insert"<<endl;
	else if ( pos == 0 )
	{
		newNode->next =	head;
		head = newNode;
	}
	else
	{
		Node *temp = head;
		while(--pos)
			temp =  temp -> next;
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return head;
}

// Delete node at position
Node * deleteNodeAtAnyPosition(Node *head, int pos)
{
	int size = getCurrSize(head);
	
	if(head==NULL)//empty link list 
		return NULL;//this is the first node
	
	Node* curr = head;
	Node* prev = head;
	
	if(pos <= 0 || pos > size)
		cout<<"Invalid position to insert"<<endl;
	
	else if(pos == 1)
	{
		head = head->next;
		delete curr;
		return head;
	}	
	
	else
	{
		while (pos != 1)
		{
			prev = curr;
			curr = curr->next;
			pos--;
		}
		prev->next = curr->next;
		delete curr;
		curr = NULL;
	}
	return head;
}
	
int main()
{
	//lets create a linked list adding items from the back 
	Node *head = nullptr; //this is head pointer pointing to nothing 
	head=appendNodeAtBack(head,10);
	head=appendNodeAtBack(head,20);
	head=appendNodeAtBack(head,30);
	head=appendNodeAtBack(head,40);
	head=appendNodeAtBack(head,50);
	appendNodeAtPosition(head->next,70);
	appendNodeAtAnyPosition(head, 15, 4); 
	printList(head);//print all the nodes one by one
	cout<<"-------"<<endl;
	deleteNodeAtAnyPosition(head, 1);
	printList(head);
	return 0;
}
