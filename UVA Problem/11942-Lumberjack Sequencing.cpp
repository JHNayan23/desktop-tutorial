#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,t,n;
    cin>>n;
    cout<<"Lumberjacks:\n";
    for(t=1;t<=n;t++)
    {

        while (cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j)
        {

                if(a>b && b>c && c>d && d>e && e>f && f>g && g>h && h>i && i>j)
                {
                    cout<<"Ordered\n";
                }
                else if (a<b && b<c && c<d && d<e && e<f && f<g && g<h && h<i && i<j)
                {
                    cout<<"Ordered\n";
                }
                else
                {
                    cout<<"Unordered\n";
                }
        }
    }
    return 0;
}
