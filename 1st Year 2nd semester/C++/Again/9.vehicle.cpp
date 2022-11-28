#include<bits/stdc++.h>
using namespace std;
class Vehicle{
public:
    string brand, color ;
    void getdata()
    {
        cin>>brand>>color;
    }
    void show()
    {
        cout<<brand<<" "<<color<<endl;
    }
};
class two_wheeler: public Vehicle{
public:
    string hornType;
    void getdata()
    {
        Vehicle::getdata();
        cin>>hornType;
    }
    void show()
    {
        Vehicle::show();
        cout<<hornType;
    }
};
class three_wheeler: public Vehicle{
public:
    string hornType;
    void getdata()
    {
        Vehicle::getdata();
        cin>>hornType;
    }
    void show()
    {
        Vehicle::show();
        cout<<hornType;
    }
};
class four_wheeler: public Vehicle{
public:
    string hornType;
    void getdata()
    {
        Vehicle::getdata();
        cin>>hornType;
    }
    void show()
    {
        Vehicle::show();
        cout<<hornType;
    }
};
int main()
{
    two_wheeler O;
    O.getdata();
    O.show();
    three_wheeler OB;
    OB.getdata();
    OB.show();
    four_wheeler OP;
    OP.getdata();
    OP.show();

}

