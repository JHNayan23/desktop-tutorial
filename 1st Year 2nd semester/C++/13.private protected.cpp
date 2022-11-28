
#include<bits/stdc++.h>
using namespace std;
class B{
private:
    int y;
protected:
    int z=10;
public:
    int q=20;
    void setY(int p)
    {
        y=p;
    }
    int getY()
    {
        cout<<"I am from private ";
        return y;
    }
    void display()
    {
        cout<<"The value of z from protected="<<z<<endl;
        cout<<"The value of q from public="<<q<<endl;
    }


};
class C: public B{

public:
    int w=40;
};
int main()
{
    C obj;

    obj.setY(30);
    cout<<obj.getY()<<endl;
    obj.display();
    cout<<obj.w;
}
