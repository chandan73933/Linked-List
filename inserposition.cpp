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

void insert(node *&head,int pos,int x)
{
cout<<"enter value:->";
cin>>x;
cout<<"enter pos:->";
cin>>pos;
node *temp=new node(x);
if(pos==1)
{
temp->next=head;
}
node *curr=head;
for(int i=1;i<pos-1&&curr!=NULL;i++)
{
curr=curr->next;
}
temp->next=curr->next;
curr->next=temp;
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
int x,pos;
node *head=new node(10);
node *temp1=new node(20);
node *temp2=new node(30);
node *temp3=new node(40);
head->next=temp1;
temp1->next=temp2;
temp2->next=temp3;
insert(head,pos,x);
print(head);
}
