#include<bits/stdc++.h>
using namespace std;

int main()
{
    fstream ffile;
    ffile.open("file",ios::in);
    if(!ffile)
    {
        cout<<"File not created!";
    }
    else
    {
        char st[200];
        ffile.getline(st,200);
        cout<<ffile;
        ffile.close();
    }
    return 0;
}
