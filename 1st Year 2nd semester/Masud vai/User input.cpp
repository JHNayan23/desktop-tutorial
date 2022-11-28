#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>mp;

    mp["salam"]="ICT";
    mp["siyam"]="CSE";

     for(auto [name,dept]:mp)
     {
         cout<<name<<"->"<<dept<<endl;
     }
    return 0;
}



