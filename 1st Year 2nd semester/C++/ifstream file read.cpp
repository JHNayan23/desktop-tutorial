#include<bits/stdc++.h>
using namespace std;

int main()
{
    fstream file;
    file.open("text.txt",ios::in);
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

