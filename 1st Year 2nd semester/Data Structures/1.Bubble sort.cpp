#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<(5-i-1); j++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[5];
    cout<<"Enter 5 integers in any order:"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr);
    cout<<"After sorting"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<" "<<arr[i];
    }

    return 0;
}
