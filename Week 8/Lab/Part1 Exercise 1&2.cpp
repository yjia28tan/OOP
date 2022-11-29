// Program to create a simple linked list with 3 nodes

#include <iostream>
using namespace std;
struct Node
{
	int data; // Data
	Node *next; // Pointer
};

void printList(Node *node)
{
	while (node != nullptr)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}

int main()
{
	Node* head= nullptr;
	Node* second = nullptr;
	Node* third = nullptr;
	
	// allocate 3 nodes in the heap
	head = new Node;
	second = new Node;
	third = new Node;
	head->data = 1; //assign data in first node
	
	// Link first node with the second node
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3; //assign data to third node
	third->next=nullptr;
	
	// Print the linked list
	printList(head);
	 
	return 0;
}
