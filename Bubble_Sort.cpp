#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int item;
    cout<<"Enter the item to be searched :";
    cin>>item;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item){
            cout<<"Found at position :"<<i+1<<endl;
            break;
        }

    }
}
