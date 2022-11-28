#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream file;
    file.open("file.txt", ios::out);
    if(!file)
    {
        cout<<"File not created!";
    }
    else
    {
        cout<<"File created successfully";
        file<<"Nayan23";
        file.close();
    }

    return 0;
}
