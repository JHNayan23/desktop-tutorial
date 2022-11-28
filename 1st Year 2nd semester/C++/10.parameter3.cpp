
#include<bits/stdc++.h>
using namespace std;
class A{
public:
    int z=20;
    void display()
    {
        cout<< " I am from A"<<endl;
    }
};
class B{
public:
    int y=30;
    void show()
    {
        cout<<" I am from B"<<endl;
    }

};
class C: public A, public B{
public:
    int q=50;

};

int main()
{
    C obj;
    obj.display();
    cout<<obj.z<<endl;
    obj.show();
    cout<<obj.z<<endl;
    cout<<obj.q;

}
