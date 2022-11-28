#include<bits/stdc++.h>
using namespace std;
class student{
public:
    int x, y;
    student()
    {

    }
    student()
    {
        cout<<"Default Construction";

    }
    student(int a, int b){
    x=a;
    y=b;
}
public:
void show(){
    cout<<x<<y;


}
}
int main()
{
    student std1;
    student st(10,20);
    student show();
}




//returntype classname:: functionname();
//I'm to code;


