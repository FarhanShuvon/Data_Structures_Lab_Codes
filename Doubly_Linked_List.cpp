#include<iostream>
using namespace std;

struct node
{
    int data;
    node*forward;
    node*back;
};

node*first = NULL;
node*last=NULL;

//int p = 1;

node*create_node(int item)
{
    node*newnode = new node;

    if(newnode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }

    newnode->data = item;
    newnode->forward = NULL;

    return newnode;

}

void insert_at_beg(node*NEW)
{
    if(first==NULL && last ==NULL)
    {
        first= NEW;
        last= NEW;
    }
    else
    {
        NEW->forward = first;
        first->back = NEW;
        first=NEW;

    }
}

void insert_at_end(node*NEW)
{
    if(first==NULL && last ==NULL)
    {
        first= NEW;
        last= NEW;
    }
    else
    {
        node*ptr= first;

        while(ptr->forward!= NULL)
        {
            ptr=ptr->forward;
        }

        ptr->forward =NEW;
        NEW->back = ptr;
    }

}

void insert_at_any_pos(int position,node*NEW)
{
    node*ptr= first;
    node*track;
    int p = 1;

    while(ptr->forward!=NULL)
    {
        track = ptr;
        ptr=ptr->forward;
       p++;

        if(p==position)
        {
            track->forward = NEW;
            NEW->forward =ptr;
            ptr->back=NEW;

        }

    }

}


void traverse()
{
    node*ptr= first;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->forward;
    }
    cout<<endl;
}

int main()
{
    int n,item;
    cin>>n;

    for(int i =0 ;i<n;i++)
    {
        cin>>item;

        node*NEW=create_node(item);
       // insert_at_beg(NEW);

        insert_at_end(NEW);
    }

    traverse();

   int i;
   cin>>i;

   int pos;
   cin>>pos;

   node*newnode = create_node(i);

   insert_at_any_pos(pos,newnode);

   traverse();


    return 0;

}
