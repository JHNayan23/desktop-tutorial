#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s="abcdefg";
    s.pop_back();
    s.insert(s.begin(),'56');
    s[1]='z';
    for(int i=0; i<s.size();i++)
    cout<<s<<endl;
    return 0;
}
