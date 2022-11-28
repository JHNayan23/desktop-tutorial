#include<iostream>
using namespace std;
int main()
{
    int i,T,n;
    int a,b;
    int c;
    cin>>T;
    for(i=0; i<T; i++)
    {
        cin>>n;
        a=b=c=n/3;
        if(a<=b<=c)
        {
            while((a+b+c)!=n)
            {
                c++;
            }
            cout<<a<<' '<<b<<' '<<c<<endl;
        }
        else
            break;
    }
    return 0;
}


