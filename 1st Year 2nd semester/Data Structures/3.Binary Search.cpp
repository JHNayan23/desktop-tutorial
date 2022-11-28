#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = (l + r)/ 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[10];
    int num;
    int output;

    cout << "Please enter 10 elements ASCENDING order" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Please enter an element to search" << endl;
    cin >> num;

    output = binarySearch(arr, 0, 9, num);

    if (output == -1)
    {
        cout << "No Match Found" << endl;
    }
    else
    {
        cout << "Match found at position: " << output << endl;
    }

    return 0;
}
