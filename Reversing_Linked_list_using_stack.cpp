#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void createList(node **a)
{
        cout<<"Enter the number of Elements: "<<endl;
        int n,value;
        cin>>n;
        node *temp=new node();
        for(int i=0;i<n;++i)
        {
            cout<<"Enter an Integer"<<endl;
            cin>>value;
            if(i==0)
            {
                (*a)=new node();
                (*a)->data=value;
                (*a)->next=NULL;
                temp=(*a);
            }
            else
            {
                temp->next=new node();
                temp=temp->next;
                temp->data=value;
                temp->next=NULL;
            }
        }
}

void display(node *a)
{
    node *temp=a;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

class Stack
{
    public:
        node *a[100];
        int top;
        Stack()
        {
            top=-1;
        }
        void push(node *b)
        {
            if(top==99)
            {
                cout<<"Stack is full"<<endl;
                return ;
            }
            a[++top]=b;
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"Stack is Empty"<<endl;
                return ;
            }
            else
                --top;
        }
};

void reverseList(node **a)
{
        node *temp=(*a);
        Stack ob;
        while(temp!=NULL)
        {
            ob.push(temp);
            temp=temp->next;
        }
        (*a)=ob.a[ob.top];
        while(ob.top!=-1)
        {
            if(ob.top!=0)
                ob.a[ob.top]->next=ob.a[(ob.top)-1];
            else if(ob.top==0)
                ob.a[ob.top]->next=NULL;
            ob.pop();
        }
}

int main()
{
    node* head=NULL;
    createList(&head);
    cout<<"####################################################################"<<endl<<endl;
    cout<<"                 Linked List:            ";
    display(head);
    reverseList(&head);
    cout<<"                 Reversed Linked List:   ";
    display(head);
    cout<<endl<<"####################################################################"<<endl;
    return 0;
}
