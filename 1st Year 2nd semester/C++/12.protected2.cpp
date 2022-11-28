
#include<bits/stdc++.h>
using namespace std;
class A{

protected:
int y=0;
void show()
{
cout<<"\nI am a protected data"<<endl;
}
public:
int x=10;
void display(){
cout<<"I am from display"<<endl;


cout<<"The  value of y="<<y;

show();

}

};

class B: public A{

public:
int z=5;

};

int main()
{
B obj;
obj.display();

cout<<"\n x="<<obj.z<<endl;

}
