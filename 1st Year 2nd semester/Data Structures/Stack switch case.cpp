#include<bits/stdc++.h>
using namespace std;

int stk[100],choice,n,x,i,top=-1;

void push()
{
    if(top>=n-1)
    {
        cout<<"STACK is over flow"<<endl;

    }
    else
    {
        cout<<"Enter a value to be pushed:"<<endl;
        cin>>x;
        top++;
        stk[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        cout<<"Stack is under flow"<<endl;
    }
    else
    {
         cout<<"The popped elements is"<<stk[top];
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        cout<<"The elements in STACK"<<endl;
        for(i=top; i>=0; i--)
        cout<<stk[i]<<endl;
        cout<<"Press Next Choice"<<endl;
    }
    else
    {
        cout<<"The STACK is empty"<<endl;
    }

}

int main()
{
    cout<<"Enter the size of STACK[MAX=100]:"<<endl;
    cin>>n;
    cout<<"STACK OPERATIONS USING ARRAY"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"1.PUSH"<<endl<<"2.POP"<<endl<<"3.DISPLAY"<<endl<<"4.EXIT"<<endl;
    while(choice!=4)
    {
        cout<<"Enter the Choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout<<"EXIT POINT"<<endl;
            break;
        }
        default:
        {
            cout<<"Please Enter a Valid Choice(1/2/3/4)";
        }

        }
    }

    return 0;
}


