#include<bits/stdc++.h>
using namespace std;
class publication{
public:
    string title;
    float price;
    void getdata()
    {
        cin>>title>>price;
    }
    void putdata()
    {
        cout<<title<<" "<<price<<endl;
    }
};
class book: public publication{
public:
    int page;
    void getdata()
    {
        publication::getdata();
        cin>>page;
    }
    void putdata()
    {
        publication::putdata();
        cout<<page<<endl;
    }
};
class tape: public publication{
public:
    float mins;
    void getdata()
    {
        publication::getdata();
        cin>>mins;
    }
    void putdata()
    {
        publication::putdata();
        cout<<mins<<endl;
    }
};
int main()
{

    book obj2;
    tape obj1;

    obj2.getdata();
    obj2.putdata();
    obj1.getdata();
    obj1.putdata();
}

