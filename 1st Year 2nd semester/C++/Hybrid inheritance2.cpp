#include<bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout<<"This is a Vehicle\n";
    }
};
class Fare
{
public:
    Fare()
    {
        cout<<"Fare of vehicle\n";
    }
};
class Car: public vehicle
{

};
class Bus: public vehicle, public Fare
{

};

int main()
{
    Bus obj;
    return 0;
}
