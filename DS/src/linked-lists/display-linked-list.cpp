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
void display_data();
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

void display_data(Node *head)
{
    Node *node = head;
    if (node == NULL)
    {
        std::cout << "No data" << std::endl;
    }
    else
    {
        while(node != NULL)
        {
            cout<<node -> data<<" ";
            node = node -> next;
        }
    }
}

int main(void)
{
    int data,count;
    cout<<"enter count:";
    cin>>count;
    while(count>0)
    {
    cout<<"Enter number:\n";
    cin>>data;
    enter_data(data);
    count--;
    }
       cout<<"Your linked list is: ";
       display_data(head); 
   return 0;
}
