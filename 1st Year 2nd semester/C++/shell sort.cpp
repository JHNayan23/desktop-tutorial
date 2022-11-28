#include<bits/stdc++.h>
using namespace std;

shellsort(int arr[],int Size)
{
    int i,j,temp;
    int gap;
    gap=Size/2;
    while(gap>0)
    {
        for(i=gap; i<Size; i++)
        {
            temp=arr[i];
            for(j=i; j>=gap && arr[j-gap]>temp; j-=gap)
            {
                arr[j]=arr[j-gap];
                arr[j]=temp;
            }
            gap=gap/2;
        }
    }
}

int main()
{
    int i,n;
    int arr[]= {23,29,15,19,31,7,9,5};
    shellsort(arr,n);
    cout<<"After sorting\n";
    for(i=0; i<n; i++)
        cout<<arr[i];
    return 0;
}
