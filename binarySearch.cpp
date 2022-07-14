#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, j;
int binarySearch(int arr[], int n, int val)
{
    int mid;
    int s = 0;
    int l = n - 1;

    while (s <= l)
    {
        mid = (s + l) / 2;
        if (val == arr[mid])
        {
            return mid;
        }
        else if (val < arr[mid])
        {
            l = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter number of numbers:  ";
    cin >> n;

    int arr[n];
    cout << "Enter array :  ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int val;
    cout << "Enter the value that u want to search: ";
    cin >> val;

    if (binarySearch(arr, n, val) == 0)
    {
        cout << "No, " << val << " is not present .";
    }
    else
    {
        cout << "Yes, " << val << " is present at " << binarySearch(arr, n, val) + 1 << endl;
    }

    return 0;
}