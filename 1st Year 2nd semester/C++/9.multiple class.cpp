
#include<bits/stdc++.h>
using namespace std;
class A{
public:
    int x=10;
    void showA()
    {
        cout<<"The value of X from A="<<x<<endl;
    }
};
class B: public A{
public:
    int y=30;
    void showB()
    {
        cout<<"The value of Y from B="<<y<<endl;

    }

};
class C: public B{
public:
    int z=50;
    void showC()
    {
        cout<<"The value of Z from C="<<z<<endl;

    }

};
int main()
{
    C obj;
    obj.showC();
    obj.showB();
    obj.showA();

}
