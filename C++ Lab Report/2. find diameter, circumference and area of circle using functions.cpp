#include<bits/stdc++.h>
using namespace std;

void circle(double r)
{
    double dia,cir,area;
    dia=2*r;
    cir=2*3.1416*r*r;
    area=3.141*r*r;
    cout<<dia<<endl<<cir<<endl<<cir<<endl<<area;
}

int main()
{
    double r;
    cin>>r;
    circle(r);
    return 0;
}
