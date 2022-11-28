#include<bits/stdc++.h>
using namespace std;
class publication
{
public:
    string title;
    float price;
    void getdata(void)
    {
        cin>>title>>price;
    }
    void putdata(void)
    {
        cout<<title<<" "<<price<<endl;
    }
};
class sales{
public:
    int a[3];
    void getdata(void)
    {
        cin>>a[0]>>a[1]>>a[2];
    }
    void putdata(void)
    {
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
};
class book: public publication, public sales
{
public:
    int page;
    void getdata(void)
    {
        sales::getdata();
        publication::getdata();

        cin>>page;
    }
    void putdata(void)
    {
        sales::putdata();
        publication::putdata();
        cout<<page<<endl;
    }
};
class virtual tape: public publication, public sales
{
public:
    float mins;
    void getdata(void)
    {
        sales::getdata();
        publication::getdata();
        cin>>mins;
    }
    void putdata(void)
    {
        sales::putdata();
        publication::putdata();
        cout<<mins<<endl;
    }
};
int main(void)
{

    book obj2;
    tape obj1;
    obj1.tape::getdata();
    obj1.putdata();
    obj2.getdata();
    obj2.putdata();

}


