#include<iostream>

using namespace std;

void Tower(int N,char Beg,char Aux,char End)
{
    if(N==1)
    {
        cout<<Beg<<"->"<<End<<endl;
        return;
    }



    Tower(N-1,Beg,End,Aux);
    Tower(1,Beg,Aux,End);
    Tower(N-1,Aux,Beg,End);
}


int main()
{

    int N;//num of disk
    cin>>N;

    Tower(N,'A','B','C');
    return 0;
}
