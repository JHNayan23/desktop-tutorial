
#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A(int b)
    {
        cout<<" I am from A"<<endl;
    }
    A(char a)
    {
        cout<<" I am from A parameter"<<endl;
    }

};
class B: public A{
public:
    B(char c):A(c){
    cout<<"I am from B"<<endl;
    }
};

int main()
{
    B obj('a');

}
