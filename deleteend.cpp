#include<iostream>
using namespace std;
struct node
{
 int data;
 struct node *next;
 node(int x)
 {
 data =x;
 next=NULL;
 }
};
void deletend(node *&head)
{
if(head==NULL)
{
return;
}
if(head->next==NULL)
{
delete head;
return;
}
node *curr=head;
while(curr->next->next!=0)
{
curr=curr->next;
delete curr->next;
curr->next=NULL;
return;
}
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
node *temp1=new node(20);
node *temp2=new node(30);
head->next=temp1;
temp1->next=temp2;
deletend(head);
print(head);
return 0;
}
