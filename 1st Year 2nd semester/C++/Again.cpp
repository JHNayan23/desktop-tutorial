#include<bits/stdc++.h>
using namespace std;
class village{
public:
    string name;
    void show(){
    cout<<name<<endl;
    }
};
class city: public village{
public:
    string cityName;
    void getCity()
    {
        cout<<cityName<<endl;
    }

};
class state: public city{
public:
    string stateName;
    void getState()
    {

        cout<<stateName<<endl;
    }
};
class country: public state{
public:
    string countryName;
    void getCountry()
    {
        cout<<countryName<<endl;
    }
};
int main()
{
    country obj;
    obj.countryName="Jack";
}
