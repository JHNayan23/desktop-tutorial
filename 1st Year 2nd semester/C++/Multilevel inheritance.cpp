#include<bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout<<"this is a vehicle\n";
    }
};
class fourwheela:public vehicle
{
public:
    fourwheela()
    {
        cout<<"objects with 4 wheela are vehicle"<<endl ;
    }
};
class car:public fourwheela
{
public:
    car()
    {
        cout<<"car has 4 wheela"<<endl;
    }
};

int main()
{
    car obj;
    return 0;
}
