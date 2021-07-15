#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
node(int x)
{
data=x;
next=NULL;
}
};


void insert(node *&head,int x)
{
node *temp=new node(x);
node *curr=head;
while(curr->next!=NULL)
{
curr=curr->next;
}
curr->next=temp;

}


void display(node *head)
{
node *curr=head;
while(curr!=NULL)
{
cout<<curr->data<<" ";
curr=curr->next;
}
}

int main()
{
node *head=new node(10);
node *temp1=new node(20);
head->next=temp1;
insert(head,40);
insert(head,50);
insert(head,60);
display(head);
}

