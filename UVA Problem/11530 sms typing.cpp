#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,sum,j,len;
    char s[105];
    cin>>t;
    getchar();
    for(i=1; i<=t; i++)
    {
        sum=0;
        gets(s);
        len=strlen(s);
        for(j=0; j<len; j++)
        {
            if(s[j]=='a'||s[j]=='d'||s[j]=='g'||s[j]=='j'||s[j]=='m'||s[j]=='p'||s[j]=='t'||s[j]=='m'||s[j]=='p'||s[j]=='t'||s[j]=='w'||s[j]==' ')
                sum=sum+1;
            else if(s[j]=='b'||s[j]=='e'||s[j]=='h'||s[j]=='k'||s[j]=='n'||s[j]=='q'||s[j]=='u'||s[j]=='x')
                sum=sum+2;

            else if(s[j]=='c'||s[j]=='f'||s[j]=='i'||s[j]=='l'||s[j]=='o'||s[j]=='r'||s[j]=='v'||s[j]=='y')
                sum=sum+3;
            else if(s[j]=='s'||s[j]=='z')
                sum=sum+4;
        }
        cout<<"Case"<<' '<<"#"<<i<<":"<<' '<<sum<<endl;
    }
    return 0;
}
