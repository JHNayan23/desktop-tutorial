#include<bits/stdc++.h>
using namespace std;
int evenodd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;
    int i=evenodd(n);
    if(i==1)
        cout<<"even";
    else
        cout<<"odd";
    return 0;
}

