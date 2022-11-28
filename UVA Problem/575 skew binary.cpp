#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    long n,sum,x,num;
    char s[100];
    while(gets(s))
    {
     sum=0;
     n=strlen(s);
     for(i=0;i<n;i++)
     {
       num=s[i]-'0';
       x=num*(pow(2,n-i)-1);
       sum+=x;
     }
     if(sum==0)
        break;
     cout<<sum<<endl;
    }
    return 0;
}

