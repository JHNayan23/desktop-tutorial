#include<bits/stdc++.h>
using namespace std;

class classA
{
public:
    int a;
};
class classB:public classA
{
public:
    int b;
};
class classC:public classA
{
public:
    int c;
};
class classD:public classB,public classC
{
public:
    int d;
};

int main()
{
    classD obj;
    obj.classB::a=10;
    obj.classC::a=100;

    obj.b=20;
    obj.c=30;
    obj.d=40;

    cout<<"a from classB : "<<obj.classB::a;
    cout<<"\n a from classC : "<<obj.classC::a;

    cout<<"\n b : "<<obj.b;
    cout<<"\n c : "<<obj.c;
    cout<<"\n d : "<<obj.d<< '\n';
}
