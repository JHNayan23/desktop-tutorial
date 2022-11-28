#include<bits/stdc++.h>
using namespace std;

int n;
void f()
{
    if(n>10)return;
    cout<<n<<endl;
    n++;
    f();
}

int main()
{
    f();
    return 0;
}

