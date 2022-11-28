#include<bits/stdc++.h>
using namespace std;
bool pal(string s)
{
    int f=0,l=s.size()-1;
    while(f<=l)
    {
    if(s[f]!=s[l])
    return 0;
    f++,l--;
    }
    return 1;

}
int main()
{
    string s;
    cin>>s;
    cout<<s;
    return 0;
}

