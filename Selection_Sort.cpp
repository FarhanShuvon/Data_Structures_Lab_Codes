#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cnt++;
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }

            cout<<"Step :"<<cnt<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
}
