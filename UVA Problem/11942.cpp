#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a[100];
        int m=0;
        for(int i=1; i<=10; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=10;i++)
        {
            if(a[10-1]>=100)
            {
                break;
            }
            else
            {
                if(a[i]>a[i+1])
                    m++;
                else
                    m--;
            }

        }
        m=abs(m);
        cout<<"Lumberjacks:"<<endl;
        if(m==9)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }
    }

    return 0;
}
