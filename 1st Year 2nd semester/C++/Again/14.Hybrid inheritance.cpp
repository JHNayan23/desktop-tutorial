#include<bits/stdc++.h>
using namespace std;
class A{
public:
    int a=30;
    void showA()
    {
        cout<<"I am from A";
    }

};
class B: virtual public A{
public:
    int b=20;
    void showB()
    {
        cout<<"I am from B";
    }
};
class C: virtual public A{
public:
    int c=32;
    void showC()
    {
        cout<<"I am from C";
    }
};
class D: virtual public A, public virtual B, virtual public C{
public:
    int d=8;
    void showD()
    {
        cout<<"I am from D";

    }
};

int main()
{
    D obj;
    B obj1;
    obj.D::showA();

    return 0;

}

