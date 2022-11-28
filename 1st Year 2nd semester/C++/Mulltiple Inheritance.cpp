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
class fourwheela
{
public:
    fourwheela()
    {
        cout<<"this is a fourwheela";
    }
};
class car:public vehicle,public fourwheela
{

};

int main()
{
    car obj1;
    return 0;
}
