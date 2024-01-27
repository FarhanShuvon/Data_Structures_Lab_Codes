#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m],mer[m+n];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }
    int i=0,j=0,k=0;
    while(i<m&&i<n)
    {
        if(arr1[i]>arr2[j])
        {
            mer[k]=arr2[j];
            j++;
            k++;
        }
        else
        {
            mer[k]=arr1[i];
            i++;
            k++;
        }

    }
    for(; i<n; i++)
    {
        mer[k]=arr1[i];
        k++;
    }
    for(; j<m; j++)
    {
        mer[k]=arr2[j];
        k++;
    }
    for(int i=0; i<m+n; i++)
    {
        cout<<mer[i]<<" ";
    }
}
