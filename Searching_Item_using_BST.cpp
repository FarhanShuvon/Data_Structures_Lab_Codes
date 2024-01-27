#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node*left;
    node*right;
};
node*create_node(int item)
{
    node*bst=new node;
    bst->data=item;
    bst->left=NULL;
    bst->right =NULL;
    return bst;
}

node * insertt(node*node,int item)
{
    if(node==NULL)
        node=create_node(item);
    else if(node->data>item)
        node->left=insertt(node->left,item);
    else
        node->right=insertt(node->right,item);
    return node;
}
bool srch(node*node,int item)
{
    if(node==NULL)
        return false;
    else  if(node->data==item)
        return true;
    else if(node->data>=item)
    {
        return srch(node->left,item);
    }
    else
        return srch(node->right,item);

}
node*maxx(node*root)
{
    node*temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    cout<<temp->data<<endl;
}

int main()
{
    node*root=NULL;

    int n,item;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>item;
        root=insertt(root,item);
    }
//    int data;
//    cout<<"enter number to be searched ";
//    cin>>data;
//    if(srch(root,data)==true) cout<<"found"<<endl;
//    else
//        cout<<"not found"<<endl;



  cout<<endl;
  cout<<"max value in this tree is ";
  cout<<maxx(root);
}
