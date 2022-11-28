#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    vector<int>v{5,10,20,25};
    mp[5]=10;
    mp[10]=15;
    mp[5]=20;
    mp[20]=25;
    mp[25]=30;

   for(auto i:v)
   {
       cout<<i<<"->"<<mp[i]<<endl;
   }
    return 0;
}


