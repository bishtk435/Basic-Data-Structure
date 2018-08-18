/*
    Simple Tree Implementation
    -> Insertion
    -> Search
*/
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node* right;
};

node* getNewNode(int x)         // Function to create a new node
{
    node *temp=new node();
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}

node* Insert(node *a,int x)     // Function to Insert a new node in the Tree
{
        if(a==NULL)
        {
            a=getNewNode(x);
        }
        else if(a->data>=x)
        {
            a->left=Insert(a->left,x);
        }
        else
        {
            a->right=Insert(a->right,x);
        }
        return a;
}

bool Search(node *a,int x)       // Function to search an element in the Tree
{
        if(a==NULL)
            return false;
        else if(a->data==x)
            return true;
        else if(a->data>=x)
            return Search(a->left,x);
        else
            return Search(a->right,x);
}

int main()
{
    node *root=new node();      // Root of the Tree
    root=NULL;
    int n,value;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cout<<"Enter an Integer: "<<endl;
        cin>>value;
        root=Insert(root,value);
    }
    cout<<"Enter the number of Integer you want to search in the tree: "<<endl;
    int n1;
    cin>>n1;
    for(int i=0;i<n1;++i)
    {
        cout<<"Enter an Integer"<<endl;
        cin>>value;
        if(Search(root,value))
            cout<<"Found"<<endl;
        else
            cout<<"Not Found"<<endl;
    }
    return 0;
}
