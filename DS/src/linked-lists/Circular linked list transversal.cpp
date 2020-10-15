/*
date: 15-10-2020
author: Poulomi Chatterjee
*/

#include <bits/stdc++.h> 
using namespace std; 


class Node 
{ 
	public: 
	int data; 
	Node *next; 
}; 


void push(Node **head_ref, int data) 
{ 
	Node *ptr1 = new Node(); 
	Node *temp = *head_ref; 
	ptr1->data = data; 
	ptr1->next = *head_ref; 


	if (*head_ref != NULL) 
	{ 
		while (temp->next != *head_ref) 
			temp = temp->next; 
		temp->next = ptr1; 
	} 
	else
		ptr1->next = ptr1; 

	*head_ref = ptr1; 
} 


void printList(Node *head) 
{ 
	Node *temp = head; 
	if (head != NULL) 
	{ 
		do
		{ 
			cout << temp->data << " "; 
			temp = temp->next; 
		} 
		while (temp != head); 
	} 
} 


int main() 
{ 
	Node *head = NULL; 
	int n,num;
	cout<<"Enter size:";
	cin>>n;
	while(n)
	{
	    cout<<"Enter number:";
	    cin>>num;
	    push(&head,num);
	    n--;
	}

	cout << "Contents of Circular Linked List in reverse\n "; 
	printList(head); 

	return 0; 
} 
