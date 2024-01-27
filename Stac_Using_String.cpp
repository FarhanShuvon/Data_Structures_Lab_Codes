#include<bits/stdc++.h>
using namespace std;

#define maxstk 20

int top=-1;

char stk[maxstk];

void push(char item)
{
    top++;
    stk[top]=item;
}
void pop()
{
    top--;
}

int main()
{
    string str;
    getline(cin,str);
    str="("+str+")";
    //cout<<str;
    string exp="";

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            exp.push_back(str[i]);
        else if(str[i]=='(')
            push(str[i]);
        else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^')
        {
            if((str[i]=='+'||str[i]=='-')&&(stk[top]=='*'||stk[top]=='/'&&stk[top]=='^'))
            {
                exp.push_back(stk[top]);
                pop();
                push(str[i]);
            }
            else if((str[i]=='*'||str[i]=='/')&&(stk[top]=='^'))
            {
                exp.push_back(stk[top]);
                pop();
                push(str[i]);
            }
            else
                push(str[i]);

        }
        else
        {
            while(stk[top]!='(')
            {
                exp.push_back(stk[top]);
                pop();
            }
            pop();
        }
    }
    cout<<exp<<endl;
}
