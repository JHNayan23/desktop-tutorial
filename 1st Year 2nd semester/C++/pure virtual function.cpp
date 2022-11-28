#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void show()=0;
};
class B:public A
{
public:
    void show()
    {
        cout<<"I am from B"<<endl;
    }
};
class C:public B
{
public:
    void display()
    {
        cout<<"I am from C"<<endl;
    }
};
int main()
{
    C obj1;
    obj1.show();
    obj1.display();
    return 0;
}
