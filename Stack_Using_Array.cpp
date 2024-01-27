#include<bits/stdc++.h>
using namespace std;
#define maxx 8
int top=-1;
int stackk[maxx];

void push(int item)
{
    top++;
    stackk[top]=item;
}
void pop()
{
    top--;
}
void traverse()
{
    for(int i=top;i>=0;i--)
    {
        cout<<stackk[i]<<" ";
    }
}
int main()
{
    push(5);
    push(6);
    push(7);
    pop();
    traverse();


}
