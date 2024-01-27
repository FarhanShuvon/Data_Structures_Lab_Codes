#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x=0;
    int j=0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        x=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>x)
        {
            cnt++;
            arr[j+1]=arr[j];
            j--;

            cout<<"step "<<cnt<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        arr[j+1]=x;
    }
    cout<<"step "<<cnt<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
//    for(int i=0; i<n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
}
