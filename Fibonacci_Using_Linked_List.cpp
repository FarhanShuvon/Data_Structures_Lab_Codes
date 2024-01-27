#include<bits/stdc++.h>//preprocessor header file
using namespace std;//using  declaration command
struct node//crating a node
{
    int data;//taking its data variable
    node*forw;//forward pointer
    node*prev;//backward pointer
};

node*head=NULL;//making head as null
node*tail=NULL;//making tail as null

node*create_node(int item)//receiving item in the create node function
{
    node*New=new node;////take memory from free storage and create a node
    New->data=item;//putting item in the data part
    New->forw=NULL;//making the forw pointer adress null
    New->prev=NULL;//making the prev pointer adress null
    return New;
}
void insert_at_beginning(node*New)//receiving nodes to insert at begining
{
    if(head==NULL&&tail==NULL)//if the head and tail is null
    {
        head=New;//head and tail will be in the same node
        tail=New;
    }
    else //then we will change the head node
    {
        New->forw=head;//new nodes forw will point at head
        head->prev=New;//heads prev will point at new node
        head=New;//head will move to new
    }
}
void insert_at_ending(node*New)//sending nodes to insert at ending
{
    if(head==NULL&&tail==NULL)//if the head and tail is null
    {
        head=New;//head and tail will be at the same node and the head will change
        tail=New;
    }
    else
    {
        node*temp=head;//temp will have head
        while(temp->forw!=NULL)//loop will continue untill it finds null
        {
            temp=temp->forw;//temp will move to the next node as i++
        }
        temp->forw=New;//temps forward pointer will have the new node
        New->prev=temp;//and the new node will point at the previous node
    }
}
void traverse()//function to traverse the linked list
{
    node*temp=head;//temp neode will have head
    while(temp!=NULL)//loop will continue unless it finds null
    {
        cout<<temp->data<<" ";//it will print the nodes data
        temp=temp->forw;//them temp will point at the next node works like i++
    }
}
void insert_at_position(node*temp,int value)//receiving the node to insert and the nodes value in the fuction
{
    node*ptr=head;//ptr node will have the head
    while(ptr->data!=value)//while the prt node reches the position to insert the value
    {
        ptr=ptr->forw;//ptr will move forward
    }
    temp->forw=ptr->forw;//node to inserts forward node will connect with ptrs forward
    ptr->forw->prev=temp;//ptr previois node will have the node to insert node
    ptr->forw=temp;//then ptrs forward will connect with temp
    temp->prev=ptr;//then temps prev will have ptr
}1int main()//main fucntion
{
    int n,item;//taking the amount of item and item variable
    cin>>n;//taking input of the amount of items
    for(int i=0; i<n; i++)//loop for input of items
    {
        cin>>item;//taking itnem input
        node*New=create_node(item);//transfering item to cerate node and sroring in new
        insert_at_ending(New);
    }
    int pos;//declaring and inputing the position of the node to insert
    cin>>pos;
    int g;
    cin>>g;//inputing the data of the node to insert
    node*value=create_node(g);//now naking the data a node
    insert_at_position(value,pos);//now sending the node to insert and position
    traverse();//calling the traverse function


}

