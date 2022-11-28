#include<bits/stdc++.h>
using namespace std;

class project
{
public:
    int a,b,c;
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    project operator +(project p)
    {
        project temp;
        temp.a=a+p.a;
        temp.b=b+p.b;

        return temp;
    }
    project operator -(project p)
    {
        project temp;
        temp.a=a-p.a;
        temp.b=b-p.b;

        return temp;
    }
    project operator *(project p)
    {
        project temp;
        temp.a=a*p.a;
        temp.b=b*p.b;

        return temp;
    }
    project operator / (project p)
    {
        project temp;
        temp.a=a/(p.a);
        temp.b=b/(p.b);

        return temp;
    }
    void show()
    {
        cout<<"a="<<a<<"b="<<b;
    }

};


main()
{
    project p1,p2,p3,p4,p5;
    p1.input(5,10);
    p2.input(20,30);
    p3.input(12,22);
    p4.input(12,15);
    p5=p1+p2*p3/p4-p1;
    p5.show();
}
