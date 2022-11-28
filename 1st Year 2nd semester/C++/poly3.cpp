#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void show(){
        cout<<"I am from A"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"I am from B"<<endl;
    }
};
int main()
{
    A a;
    B b;
    B *p;
    p=&a;
    p->show();
    b.show();
    return 0;
}
