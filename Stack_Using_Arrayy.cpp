#include<bits/stdc++.h>

using namespace std;

#define MAXSTK 8

int STACK[MAXSTK];

int TOP = -1;

void push(int ITEM)
{
    if(TOP == MAXSTK)
    {
        cout<<"Overflow"<<endl;
        exit(1);
    }

    TOP++;

    STACK[TOP] = ITEM;

}

void pop()
{
    if(TOP == -1)
    {
        cout<<"Underflow"<<endl;
        exit(1);
    }
    cout<<STACK[TOP]<<" is deleted"<<endl;
    TOP--;
}

void STraverse()
{
    for(int i = TOP; i >=0; i--)
    {
        cout<<STACK[i]<<endl;
    }
}

int main()
{

    push(5);
    push(6);
    push(7);
    STraverse();
    pop();
    pop();
    STraverse();




    return 0;
}
