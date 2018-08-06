#include<iostream>
using namespace std;

struct node
{
    int data;
    struct  node* next;
};
struct  node *f=NULL;
struct node *r=NULL;

bool isEmpty()          // Function to check whether the Queue is empty or not
{
    return (f==NULL&&r==NULL);
}

void Enqueue(int x)     // Function to add an element in the Queue
{
    struct node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    if(isEmpty())
    {
        f=temp;
        r=temp;
    }
    r->next=temp;
    r=temp;
}

void Dequeue()      //  Function to delete an element in the Queue
{
    if(isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
        return  ;
    }
    struct  node* temp=f;
    if(f==r)
    {
        f=NULL;
        r=NULL;
    }
    else
    {
        f=f->next;
    }
    delete(temp);
}

 int f_element()        // Function  that return front of the Queue
 {
     if(isEmpty())
     {
         return -1;
     }
     else
        return f->data;
 }

 int r_element()    // Function that returns rear of the Queue
 {
     if(isEmpty())
        return -1;
     else
        return r->data;
 }
 void display()     // Function to display Queue
 {
     struct node* temp=f;
     while(temp!=NULL)
     {
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
 }
int main()
{
    cout<<"Enter the  number of elements you want to enter in  your queue:"<<endl;
    int n;
    cin>>n;
    int value;
    for(int i=0;i<n;++i)
    {
        cout<<"Enter an integer  you want to insert in  your queue: "<<endl;
        cin>>value;
        Enqueue(value);
    }
    a:
    cout<<"******Queue*******"<<endl;
    cout<<"1.Enqueue an  Element"<<endl;
    cout<<"2.Dequeue an Element"<<endl;
    cout<<"3.Front Element"<<endl;
    cout<<"4. Rear Element"<<endl;
    cout<<"5.Display Full Queue"<<endl;
    cout<<"Enter your choice"<<endl;
    int choice;
    char ch;
    cin>>choice;
    switch(choice)
    {
        case 1:
                cout<<"Enter an integer  you want to insert in  your queue: "<<endl;
                cin>>value;
                Enqueue(value);
                cout<<"Press 'y' for more operation or any key for exit"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto  a;
                break;
        case 2:
                Dequeue();
                cout<<"Press 'y' for more operation or any key for exit"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto  a;
                break;
        case 3:
                cout<<f_element()<<endl;
                cout<<"Press 'y' for more operation or any key for exit"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto  a;
                break;
        case 4:
                cout<<r_element()<<endl;
                cout<<"Press 'y' for more operation or any key for exit"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto  a;
                break;
         case 5:
                display();
                cout<<"Press 'y' for more operation or any key for exit"<<endl;
                cin>>ch;
                if(ch=='y')
                    goto  a;
                break;

    }
    return 0;
}
