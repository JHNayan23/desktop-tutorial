
#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A()
    {
        cout<<" I am from A"<<endl;
    }
    A(int a)
    {
        cout<<" I am from A parameter"<<endl;
    }
    ~A()
    {
        cout<<"I am from A destructor"<<endl;
    }

};
class B: public A{
public:
    B(){
    cout<<"I am from B"<<endl;
    }
    B(int c):A(c)
    {
        cout<<"I am from B parameter"<<endl;
    }
    ~B()
    {
        cout<<"I am from B destructor"<<endl;
    }

};

int main()
{
    B ob(10);
    B obj;

}
