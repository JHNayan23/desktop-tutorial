#include<bits/stdc++.h>
using namespace std;
int q[100], i, n, x, f = - 1, r = - 1;
void Insert()
{
    if(r==n-1)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        if(f==-1)
        {
            f=0;
        }
        cout<<"Enter Element:"<<endl;
        cin>>x;
        r++;
        q[r]=x;
    }
}
void Delete()
{
    if(f==-1 || f>r)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<"Deleted Element:"<<q[f]<<endl;
        f++;
    }
}
void Display()
{
    if(f==-1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Elements:"<<endl;
        for(i=f; i<=r; i++)
        {
            cout<<q[i]<<endl;
        }
    }
}
int main()
{
    cout<<"Enter the size of the array[max 100]"<<endl;
    cin>>n;
    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;


    while(ch!=4)
    {
        cout<<"Enter Choice:"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
