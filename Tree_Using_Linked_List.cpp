#include<bits/stdc++.h>
using namespace std;
//this tree has been made by taking user input
struct node
{
    int data;
    node* left;
    node*right;
};
node*create_node(int data)
{
    node*bst=new node;
    bst->data=data;
    bst->right=NULL;
    bst->left=NULL;

    return bst;
}
node*build(node*root)
{
    cout<<"enter the item :"<<endl;
    int item;
    cin>>item;
    root=create_node(item);
    if(item==-1)
    {
        return NULL;
    }
    cout<<"insert data in the left of "<<item<<endl;
    root->left=build(root->left);
    cout<<"inset data in the right of "<<item<<endl;
    root->right=build(root->right);
    return root;

}
void pre_order(node*root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
void inorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//2 7 1 -1 -1 6 5 -1 -1 10 -1 -1 9 -1 8 3 -1 -1 4 -1 -1
int main()
{
    node*root=NULL;
    root=build(root);
    cout<<"preorder traversal is ";
    pre_order(root);
    cout<<endl;
    cout<<"inorder traversal is ";
    inorder(root);
}
