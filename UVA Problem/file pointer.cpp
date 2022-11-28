#include<bits/stdc++.h>
using namespace std;
fstream fs;
fs.write((char*))
write(char* ptr,int n)
read(char* ptr,int n)

class data
{
public:
    char name[30],add[30];
    void input()
    {
        cin>>name>>add;
    }
};
void show(char name, char add)
{
    cout<<"Name="<<name<<"Address="<<add;
}
main()
{
    data d1,d2;
    d1.input();
    fstream fs;
    fs.open("teext.txt",ios::out);
    fs.write((char*)&d1,sizeof(d1));
    fs.close();
    fs.open("teext.txt",ios::in);
    fs.read((char*)&d2,sizeof(d2));
    d2.show();
    fs.close();
}
