#include<iostream>
#define max_size 101
using namespace std;

class Stack
{
    private:
        int a[max_size];
        int top;
    public:
        Stack()
        {
            top=-1;
        }
        void push(int x)
        {
            if(top==max_size-1)
                cout<<"Stack Overflow"<<endl;
            else
                a[++top]=x;
        }
        void pop()
        {
            if(top==-1)
                    cout<<"Stack Underflow"<<endl;
            else
                --top;
        }
        void print()
        {
            for(int i=0;i<=top;++i)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        void top_element()
        {
            if(top==-1)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<a[top]<<endl;
            }
        }
};
int main()
{
    Stack ob;
    a:
    cout<<"******Stack*******"<<endl;
    cout<<"1. Push Operation"<<endl;
    cout<<"2. Pop Operation"<<endl;
    cout<<"3. Print Stack"<<endl;
    cout<<"4. Top of the Stack"<<endl;
    cout<<"Enter your choice(1-4)"<<endl;
    int choice;
    cin>>choice;
    char ch;
    switch(choice)
    {
        case 1:
            cout<<"Enter an Integer "<<endl;
            int value;
            cin>>value;
            ob.push(value);
            cout<<"Press 'y' for more operations "<<endl;
            cin>>ch;
            if(ch=='y')
                goto a;
            else break;
        case 2:
             ob.pop();
            cout<<"Press 'y' for more operations "<<endl;
            cin>>ch;
            if(ch=='y')
                goto a;
            else break;
        case 3:
            ob.print();
            cout<<"Press 'y' for more operations "<<endl;
            cin>>ch;
            if(ch=='y')
                goto a;
            else break;
        case 4:
            ob.top_element();
            cout<<"Press 'y' for more operations "<<endl;
            cin>>ch;
            if(ch=='y')
                goto a;
            else break;
    }
    return 0;
}
