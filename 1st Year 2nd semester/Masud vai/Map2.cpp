#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp[5]=10;
    mp[10]=15;
    mp[5]=20;

   for(auto i:mp)
   {
       cout<<i.first<<" "<<i.second<<endl;
   }
    return 0;
}

