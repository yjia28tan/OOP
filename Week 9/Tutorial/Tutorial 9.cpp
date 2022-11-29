// Tutorial 9
#include<iostream>
using namespace std;
struct Node 
{
	int data;
	Node *next;
	Node(int x) // every new nodes create 
	{
		data = x; // has the data x and pointing to NULL
		next=NULL;
	}
};

// Add node at front
Node * addNodeAtFront(Node *head,int num)
{
	Node *latestNode = new Node(num);
	latestNode->next = head;
	return latestNode;	
}

// Delete node at front
Node * deleteNodeAtFront(Node *head, int num)
{
	if(head==NULL)//empty link list 
	{
		return NULL;//this is the first node
	}
	Node *curr= nullptr;//current pointer to go through the linked list
	curr = head->next; //current will point to the next node after head
	delete head;//delete the current head 
	head=curr;//make the node pointed by the current become the head 
	return head;
}

// required for insertAfter
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

// Add Node Between Any Node
Node * addNodeBetweenAnyNode(Node *head, int num, int pos)
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

// Add Node AT Tail
Node * addNodeAtBack(Node *head,int num)
{
	Node *latestNode = new Node(num);
	if(head==NULL)//empty link list 
	{
		return latestNode;//this is the first node
	}
	
	Node *curr=NULL; 
	curr=head;
	while(curr->next!=NULL)
//	{
		curr=curr->next;
//	}
	curr->next=latestNode;
	return head;	
}

void displayList(Node *node)
{
	if(node==NULL) 
	{
		cout<<"The list is empty.";
	}
	while(node != nullptr)
	{
		cout<<node->data<<endl;
		node=node->next; 
	}
}

int main()
{
//	int position;
	Node *head = nullptr;
	head = addNodeAtFront(head, 6);
	head = addNodeAtFront(head, 4);
	head = addNodeAtFront(head, 2);
	cout<<" Initial Linked List "<<endl;
	displayList(head);
	
	// 1 add at head
	head = addNodeAtFront(head, 1);
	cout<<" 1 is added in front of the list "<<endl;
	displayList(head);
	
	// delete 1 at head
	head = deleteNodeAtFront(head, 1);
	cout<<" 1 is deleted in front of the list "<<endl;
	displayList(head);
	
	// add 10 after any node
	head = addNodeBetweenAnyNode(head, 10 , 15);
	cout<<" 10 is added between any node "<<endl;
	displayList(head);

	// add num at tail
	head = addNodeAtBack(head, 22);
	cout<<" 22 is added at tail of the list "<<endl;
	displayList(head);
	
	return 0;
}
