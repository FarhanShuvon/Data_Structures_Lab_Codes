#include<iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};


BstNode* create_node(int data)
{
    BstNode* newNode = new BstNode;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

BstNode* Insert(BstNode* node, int data)
{
    if(node == NULL)
    {
        node = create_node(data);
    }

    else if( node->data > data)
    {
        node->left = Insert(node->left,data);
    }

    else
    {
        node->right = Insert(node->right,data);
    }
    return node;
}

bool Search(BstNode* root,int data)
{
    if(root == NULL)
    {
        return false;
    }
    else if(root->data == data)
    {
        return true;
    }
    else if(data <= root->data)
    {
        return Search(root->left,data);
    }
    else
    {
        return Search(root->right,data);
    }
}
void inorder(BstNode*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void insertt(BstNode*root,BstNode* key)
{
    BstNode*prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key->data==root->data)
        {
            cout<<"This value cant be inserted "<<endl;
            return ;
        }
        else if(key->data<root->data)
            root=root->left;
        else
            root=root->right;
    }
    if(key->data<prev->data)
        prev->left=key;
    else
        prev->right=key;
}
int main()
{
    BstNode* root = NULL;

    int n, element;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cin>>element;
        root = Insert(root, element);
    }
    inorder(root);
    cout<<endl;
//    int g;
//    cin>>g;
//    BstNode*key=create_node(g);
//    insertt(root,key);
//    cout<<"Tree after insertion ";
//    inorder(root);
}
