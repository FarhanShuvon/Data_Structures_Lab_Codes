#include<bits/stdc++.h>

using namespace std;

struct Node
{

    int data;
    Node *next;

};

Node *START = NULL; // Empty List

Node *create_node(int item)
{

    Node *NEW = new Node;  // Take memory from free storage list and create a node

    if(NEW ==  NULL)
    {
        cout<<"OVERFLOW"<<endl;
        exit(1);
    }

    NEW->data = item;
    NEW->next = NULL;

    return NEW;


}

void Insert_at_beginning(Node *NEW)
{
    NEW->next = START;
    START = NEW;    // O(1)
}

void Traverse()
{
    Node *PTR = START;

    while(PTR!=NULL)  //O(n)
    {
        cout<<PTR->data<<endl;
        PTR = PTR->next;
    }
}

void Insert_at_ending(Node *NEW)
{
    if(START == NULL) Insert_at_beginning(NEW);
    else
    {
        Node *PTR = START;

        while(PTR->next != NULL)  // For finding the last node in PTR variable  // O(n)
        {
            PTR = PTR->next;  // works like i++ in arrays
        }

        PTR->next = NEW;  // NEW node in present last node next address and NEW node becomes the last node
    }
}

void Insert_after_given_value(int value, Node * NEW)
{
    Node *PTR = START;

    while(PTR->data != value)
    {
        PTR = PTR->next;
    }
    NEW->next = PTR->next;
    PTR->next = NEW;

}

int main()
{

    int n, item;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        cin>>item;

        Node *NEW = create_node(item);
        //insert
        //Insert_at_beginning(NEW);
        Insert_at_ending(NEW);
    }
    Node *newnode = create_node(10000);
    Insert_after_given_value(30, newnode);
    Traverse();




    return 0;
}
