#include <iostream>  //including preprocessor directive that provides the standard input and output streams, cin and cout
#include<utility> // //including preprocessor directive for swap function
using namespace std; // declearing that standered namespace is used in the code to avoid writting 'std::' repetedly

#define N 1000  // defineing the max size of tree element N 100

int a[N];  // declearing an int array a for tree

int Index = 0;  //declearing an array's last index tracker int variable Index  with initial value 0

void insert(int item) // declearing a void function to insert item in the tree which receives item as perameter
{
    if(Index==N)  // if condition to cheak the array is full of not
    {
        cout<<"Tree overflow\n";  // print overflow
        return;  // return from the function
    }
    a[Index] = item;  // assigning new item at a[Index]
    int parent = Index / 2;  // declearing an int veriable parent and assigning here Index/2 as it is the parent node's of node a[Index]
    int child = Index;  //// declearing an int veriable child  and assigning here Index
    while (child != 0)  // loop to reach at the root to assign node at proper position
    {
        if (a[child] > a[parent])  // if the child is bigger than parent
        {
            swap(a[child], a[parent]); // swap the value of child and pareent
        }

        child = parent; // now child is the parent
        parent = child / 2;  // parent is child/2
    }

    Index++;   // incriment of Index
}

int main() // main function
{

    int n, item; // declearing two variable n and item
    cin >> n;  // taking input n
    for (int i = 0; i <n; i++)  // loop to take n item
    {
        cin >> item;  // taking input item
        insert(item);  // passing item at insert function
    }

    for(int i=0;i<Index;i++)  // loop to print the elements of tree
    {
        cout<<a[i]<<" ";  // printing element
    }

    return 0; // if program terminated successfully then main function will return 0
}

