#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream file;
    file.open("text.txt",ios::out);
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

