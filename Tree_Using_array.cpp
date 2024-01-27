#include<bits/stdc++.h>
using namespace std;
int root=0;


void preorder(int arr[],int root,int n)
{
    if(root>=n)
        return;
    cout<<arr[root]<<" ";
    preorder(arr,root*2+1,n);
    preorder(arr,root*2+2,n);
}
void postorder(int arr[],int root,int n)
{
    if(root>=n)
        return ;
    postorder(arr,root*2+1,n);
    postorder(arr,root*2+2,n);
    cout<<arr[root]<<" ";
}
void inorder(int arr[],int root,int n)
{
    if(root>=n)
        return ;
    inorder(arr,root*2+1,n);
    cout<<arr[root]<<" ";
    inorder(arr,root*2+2,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Preorder traversal is :";
    preorder(arr,root,n);
    cout<<endl;
    cout<<"Postorder traversal is :";
    postorder(arr,root,n);
    cout<<endl;
    cout<<"Inorder traversal is :";
    inorder(arr,root,n);
    cout<<endl;

}
