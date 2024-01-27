#include<bits/stdc++.h>
using namespace std;

struct node
{
    char data;
    node*next;
};

node*front =NULL;
node*rear=NULL;

void push(char item)
{
    node*newnode=new node;
    newnode->data=item;
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }

}
void pop()
{
    front=front->next;
}
void traverse()
{
    node*temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    push('A');
    push('B');
    push('C');
    traverse();
    cout<<endl;
    pop();
    traverse();

}
