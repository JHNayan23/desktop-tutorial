
#include<bits/stdc++.h>
using namespace std;
class A{
public:
    int x=33;
    void showA()
    {
        cout<<" I am from A "<<x<<endl;
    }
};
class B: public A{
public:
    int y=38;
    void showB()
    {
        cout<<" I am from B "<<y<<endl;
    }
};
class C: public A{
public:
    int s=65;
    void showC()
    {
        cout<<" I am from C "<<s<<endl;
    }

};
class D: public B{
public:
    int d=48;
    void showD()
    {
        cout<<"I am from D "<<d<<endl;
    }
};
class E: public C{
public:
    int e=59;
    void showE()
    {
        cout<<"I am from E "<<e<<endl;
    }

};
int main()
{
    D objd;
    objd.showA();
    objd.showB();
    objd.showD();
    E obje;
    obje.showA();
    obje.showC();
    obje.showE();

}
