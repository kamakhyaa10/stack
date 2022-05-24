[3:05 PM, 5/24/2022] Karan: # Aim
Write a menu driven program that implements the following operations on a Stack (either implement as Linear array or as Linked list) 
Push 
Pop
Display Top of the Stack
[3:08 PM, 5/24/2022] Karan: // C++ program to Implement a stack
//using singly linked list
#include <bits/stdc++.h>
using namespace std;

// Declare linked list node

struct Node
{
	int data;
	Node* link;
};

Node* top;
// Utility function to add an element
// data in the stack insert at the beginning
void push(int data)
{
	
	// Create new node temp and allocate memory in heap
	Node* temp = new Node();

	// Check if stack (heap) is full.
	// Then inserting an element would
	// lead to stack overflow
	if (!temp)
	{
		cout << "\nStack Overflow";
		exit(1);
	}

	// Initialize data into temp data field
	temp->data = data;

	// Put top pointer reference into temp link
	temp->link = top;

	// Make temp as top of Stack
	top = temp;
}


// Utility function to check if
// the stack is empty or not
int isEmpty()
{
	//If top is NULL it means that
	//there are no elements are in stack
	return top == NULL;
}

// Utility function to return top element in a stack
int peek()
{
	
	// If stack is not empty , return the top element
	if (!isEmpty())
		return top->data;
	else
		exit(1);
}

// Utility function to pop top
// element from the stack
void pop()
{
	Node* temp;

	// Check for stack underflow
	if (top == NULL)
	{
		cout << "\nStack Underflow" << endl;
		exit(1);
	}
	else
	{
		
		// Assign top to temp
		temp = top;

		// Assign second node to top
		top = top->link;

		//This will automatically destroy
		//the link between first node and second node

		// Release memory of top node
		//i.e delete the node
		free(temp);
	}
}