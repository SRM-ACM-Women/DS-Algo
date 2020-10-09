#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
}*head, *temp;

typedef struct node sn;
sn* head;

void insert_end(int data){
    sn *newnode = (sn*)malloc(sizeof(sn));
    newnode->data = data;
    newnode->next=NULL;
    if(head==NULL)head=newnode;
    else{
        temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void del_pos(int d){
    if(head==NULL)return;
    if(d==0){
        temp=head;
        head=head->next;
        free(temp);
    }
    else{
        temp=head;
     for(int i =0; i<d-1; i++)
     {
         temp=temp->next;
     }
        sn*x = temp->next;
        temp->next=x->next;
    free(x);
    }
}

void display()
{
temp=head;
while(temp){
    if(temp->next==NULL)printf("%d", temp->data);
    else printf("%d->", temp->data);
    temp=temp->next;
}}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int v;
        scanf("%d", &v);
        insert_end(v);
    }
    int d;
    scanf("%d", &d);
    del_pos(d);
    display();
    return 0;
}
