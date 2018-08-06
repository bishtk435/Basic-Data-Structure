#include<iostream>
using namespace std;

struct node
{
    int data;
    struct  node* next;
};
struct  node *f=NULL;
struct node *r=NULL;

bool isEmpty()
{
    return (f==NULL&&r==NULL);
}

void Enqueue(int x)
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

void Dequeue()
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

 int f_element()
 {
     if(isEmpty())
     {
         return -1;
     }
     else
        return f->data;
 }

 int r_element()
 {
     if(isEmpty())
        return -1;
     else
        return r->data;
 }
 void display()
 {
     struct node* temp=f;
     while(temp!=NULL)
     {
         cout<<temp->data<<" ";
     }
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

    }
    return 0;
}
