#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcdefg";

    map<char,vector<int>mp;
    for(int i=0; i<s.size; i++)
    {
        mp[s[i].push_back(i);
    }
    for(auto [x,y]:mp)
    {
        cout<<x<<"->";
        for(auto z:y)cout<<z<<" ";cout<<endl;
    }

    return 0;
}

