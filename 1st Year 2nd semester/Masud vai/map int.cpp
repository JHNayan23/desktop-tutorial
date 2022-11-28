#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;

    mp["salam"]=10;
    mp["siyam"]=20;

     for(auto [name,age]:mp)
     {
         cout<<name<<"->"<<age<<endl;
     }
    return 0;
}




