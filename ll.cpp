#include<iostream>
using namespace std;
struct Node
{
 int data;
 Node *Next;
 Node(int x)
 {
 data =x;
 Next=NULL;
 }
};
void print(Node *head)
{
Node *curr=head;
while(curr!=NULL)
{
cout<<(curr->data)<<" ";
curr=curr->Next;
}
}
int main()
{
Node *head=new Node(10);
head->Next=new Node(20);
head->Next->Next=new Node(30);
print(head);
return 0;
}
