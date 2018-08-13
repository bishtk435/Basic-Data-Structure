#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

bool isEmpty(node *a)   //Function to check whether Stack is Empty or not
{
    return (a==NULL);
}

void push(node **a,int x)   //Function to add an element in the Stack
{
    node *temp=new node();
    temp->data=x;
    if(isEmpty(*a))
    {
        (*a)=new node();
        temp->next=NULL;
        (*a)=temp;
    }
    else
    {
        temp->next=(*a);
        (*a)=temp;
    }
}

void pop(node **a)  //Function to remove an element form the Stack
{
    if(isEmpty(*a))
    {
        cout<<"Stack is Empty"<<endl;
        return ;
    }
    else
    {
        node *temp=(*a);
        (*a)=(*a)->next;
        delete(temp);
    }
}

void top_element(node *a)   // Function to print the top element of the Stack
{
    if(isEmpty(a))
    {
        cout<<"Stack is Empty"<<endl;
        return ;
    }
    else
    {
        cout<<(a)->data<<endl;
    }
}

void print(node *a) // Function to print the Stack
{
        node *temp=a;
        if(temp==NULL)
        {
            cout<<"Stack is Empty"<<endl;
            return ;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
}

int main()  // main function
{
    node *head1=NULL;   
    a:
    cout<<"******** Stack Using Linked List *******"<<endl;
    cout<<"1. Push Operation"<<endl;
    cout<<"2. Pop Operation"<<endl;
    cout<<"3. Print Stack"<<endl;
    cout<<"4. Top of the Stack"<<endl;
    cout<<"Enter your choice(1-4)"<<endl;
    int choice,value;
    char ch;
    cin>>choice;
    switch(choice)
    {
        case 1:
                cout<<"Enter an Integer"<<endl;
                cin>>value;
                push(&head1,value);
                cout<<"Press 'y' for more operations"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto a;
                else
                    break;
        case 2:
                pop(&head1);
                 cout<<"Press 'y' for more operations"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto a;
                else
                    break;
        case 3:
                print(head1);
                 cout<<"Press 'y' for more operations"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto a;
                else
                    break;
        case 4:
                top_element(head1);
                 cout<<"Press 'y' for more operations"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto a;
                else
                    break;
    }
    return 0;
}
