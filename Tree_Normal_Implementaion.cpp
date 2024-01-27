#include<bits/stdc++.h>

using namespace std;

/*
                           2
             7                        9
    1              6                      8
               5       10           3         4

*/
//this tree id formed by taking input manually
struct Node
{
    int data;
    Node *left;
    Node *right;

};

//Node *Root = NULL;

Node *create_node(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->left = NULL;
    new_node-> right = NULL;


    return new_node;

}

void add_left_child(Node *parent, Node *child)
{
    parent->left = child;
}

void add_right_child(Node *parent, Node *child)
{
    parent->right = child;
}


Node *Create_tree()
{
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);
    Node *one = create_node(1);
    Node *six = create_node(6);

    add_left_child(seven, one);
    add_right_child(seven, six);

    Node *five = create_node(5);
    Node *ten = create_node(10);
    add_left_child(six, five);
    add_right_child(six, ten);

    Node *eight = create_node(8);
    add_right_child(nine, eight);

    Node *three = create_node(3);
    Node *four = create_node(4);
    add_left_child(eight, three);
    add_right_child(eight, four);


    return two;
}


void pre_order(Node *node)
{
    cout<<node->data<<" ";

    if(node->left!=NULL)
    {
        pre_order(node->left);
    }
    if(node->right!=NULL)
    {
        pre_order(node->right);
    }

    return;
}

void in_order(Node *node)
{


    if(node->left!=NULL)
    {
        in_order(node->left);
    }
    cout<<node->data<<" ";

    if(node->right!=NULL)
    {
        in_order(node->right);
    }
}

void post_order(Node *node)
{


    if(node->left!=NULL)
    {
        post_order(node->left);
    }

    if(node->right!=NULL)
    {
        post_order(node->right);
    }

    cout<<node->data<<" ";
}



int main()
{
    Node *root = Create_tree();

    pre_order(root);
    cout<<endl;
    in_order(root);
    cout<<endl;
    post_order(root);
    cout<<endl;
}
