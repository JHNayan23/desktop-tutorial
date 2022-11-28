#include<iostream>
using namespace std;
class a
{
public:

   string name="Jisan ";

};
class b
{
public:
    string nam=" Nasimul";

};
class c:public a,public b
{
public:
    void output()
    {


   string s=name+nam;
   cout<<s;
    }
};
int main()
{
    c obj;
    obj.output();
}

