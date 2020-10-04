#include <iostream>
using namespace std;

struct snode
{
	int data;
	snode* next;
};

void push(snode **ref, int data)
{
	snode *newn = new snode;
	newn->data = data;
	newn->next = NULL;

	snode *curr = *ref;

	if(curr == NULL)
	{
		*ref = newn;
		return;
	}

	while(curr->next != NULL)
		curr = curr->next;
	curr->next = newn;
}

void pop(snode **ref)
{
	snode *curr = *ref;
	while(curr->next->next != NULL)
		curr = curr->next;
	curr->next = NULL;
}

void disp(snode *ref)
{
	snode *curr = ref;

	if(curr == NULL)
		return;
	disp(curr->next);
	cout<<"|"<<curr->data<<"|"<<endl;
	/*while(curr != NULL)
	{
		cout<<"|"<<curr->data<<"|"<<endl;
		curr = curr->next;
	}*/
}

int top(snode *ref)
{
	snode *curr = new snode;
	while(curr->next != NULL)
	{
		curr = curr->next;
	}
	return curr->data;
}

void stackops()
{
  int ch;
  snode *head = NULL;
  do
  {
    cout<<"----\n0.Exit\n1.push\n2.pop\n3.disp\n4.top\n----"<<endl;
    cin>>ch;
    switch(ch)
    {
      case 0:
        break;
      case 1:
        int var;
        cin>>var;
        push(&head, var);
        break;
      case 2:
        pop(&head);
        break;
      case 3:
        disp(head);
        break;
      case 4:
        cout<<top(head);
        break;
    }
  }
  while(ch != 0);
  return;
}
