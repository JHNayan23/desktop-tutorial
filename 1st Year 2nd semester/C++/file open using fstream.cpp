#include<bits/stdc++.h>
using namespace std;

int main()
{
    fstream file;
    file.open("file",ios::out);
    if(!file)
    {
        cout<<"File not created!";
    }
    else
    {
        cout<<"File created successfully";
        file.close();
    }
    return 0;
}
