#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
node(int x)
{
data=x;
next =NULL;
}
};


void insert(node *&head,int x)
{
node *temp1=new node(x);
temp1->next=head;
head=temp1;
}


void print(node *head)
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
node *temp=new node(200);
head->next=temp;
insert(head,300);
insert(head,400);
print(head);
}
