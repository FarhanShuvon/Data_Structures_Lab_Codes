#include<bits/stdc++.h>
using namespace std;

struct stk
{
    string data;
    stk*next;
};

stk*top=NULL;

void push(string str)
{
    stk*newnode=new stk;
    if(newnode==NULL)
    {
        cout<<"Overflow"<<endl;
        exit(1);
    }
    newnode->data=str;
    newnode->next=top;
    top=newnode;


}
void pop()
{
    top=top->next;
}

void traverse()
{
    stk*temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    push("AAA");
    push("BBB");
    push("CCC");
    traverse();
    cout<<endl;
    pop();
    traverse();
}
