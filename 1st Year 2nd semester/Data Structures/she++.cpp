#include<iostream>
using namespace std;
    int stack[3];
    int top=-1;

    void push(int x)
    {
        if(top<3-1){
            top=top+1;
            stack[top]=x;
            cout<<x<<endl;
        }
        else{
            cout<<"overflow"<<endl;
        }

    }

    int pop()
    {
        if(top>=0){
            int var=stack[top];
            top=top-1;
            return var;
        }
        else{
            cout<<"underflow"<<endl;
            return -1;
        }

    }

    int main()
    {
        push(100);
        push(200);
        push(300);
        push(400);

        cout<<pop()<<endl;
        cout<<pop()<<endl;
        cout<<pop()<<endl;
        pop();


        push(400);
        return 0;

    }
