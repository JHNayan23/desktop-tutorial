#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,n,len;
    int arr[100];
    while(cin>>n)
    {
        if(n<0)
            break;
        len=sizeof(arr);
        for(i=0; i<len; i++)
        {
            x=n%3;
            arr[i]=x;
            n=n/3;
            if (n==0)
                break;
        }

        for(int j=i; j>=0; j--)
        {
            cout<<arr[j];
        }
        cout<<endl;
    }

    return 0;
}
