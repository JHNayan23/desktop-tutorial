#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A()
    {
        cout<<"I am from A"<<endl;
    }
};
class B{
public:
    B()
    {
        cout<<"I am from B"<<endl;
    }
};
class C: public A, public B{
public:
    int y=0;
};
int main()
{
    C obj;
}

