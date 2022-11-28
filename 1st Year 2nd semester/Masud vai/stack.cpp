#include<bits/stdc++.h>
using namespace std;
int main()
{

    stack<int>st;
    st.push(10);
    st.push(15);

    st.push(40);
    st.pop();
    while(st.size())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}




