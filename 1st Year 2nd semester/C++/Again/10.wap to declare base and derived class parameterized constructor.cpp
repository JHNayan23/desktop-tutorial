#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A(int a)
    {
        cout<<"I am from A"<<endl;
    }

};
class B: public A{
public:
    B(int c):A(c){
    cout<<"I am from B"<<endl;
    }

};
int main()
{
    B obj(10);
}

