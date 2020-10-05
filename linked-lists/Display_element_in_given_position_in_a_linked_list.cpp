/*
date: 05-10-2020
author: Poulomi Chatterjee
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void enter_data();
Node *head = NULL, *prev_node = NULL;

void enter_data(int data)
{
    Node* new_node = new(Node);
    if(head == NULL)
    {
        new_node -> data = data;
        new_node -> next = NULL;
        head = new_node;
        prev_node = new_node;
    }
    else
    {
        new_node -> data = data;
        new_node -> next = NULL;
        prev_node -> next = new_node;
        prev_node = new_node;
        
    }
}



void find_element(int pos,Node *head)
{
    Node *node = head;
    int count = 1;
    while(node != NULL)
   { 
       if(count == pos)
    {
        cout<<"Element "<< node -> data << " is at position "<< pos;
        break;
    }
    else
    {
        node = node -> next;
        count++;
    }
   }
    
}

int main(void)
{
    
    int data,count,position;
    cout<<"enter count:";
    cin>>count;
    while(count>0)
    {
    cout<<"Enter number:\n";
    cin>>data;
    enter_data(data);
    count--;
    }
    cout<<"Enter position:";
    cin>>position;
    find_element(position,head);
}
