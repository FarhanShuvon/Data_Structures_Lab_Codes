#include<bits/stdc++.h>

using namespace std;

int A[100];

int partioning(int L, int H)
{
    int pivot = A[L];

    int i = L ,  j = H;

    while(i<j)
    {
        while(A[i]<=pivot)
        {
            i++;
        }

        while(A[j]> pivot)
        {
            j--;
        }

        if(i<j)
        {
            swap(A[i],A[j]);
        }

    }

    swap(A[L],A[j]);

    return j;
}

void quick_sort(int L , int H)
{
    if(L<H)
    {
        int j = partioning(L,H);

        quick_sort(L,j);
        quick_sort(L+1,H);
    }
}

int main()
{
    int n;
    cin>>n;



    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    A[n]=INT_MAX;

    quick_sort(0,n);

     for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    cout<<endl;


    return 0;
}


