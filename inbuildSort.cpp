#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, j;

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
    sort(arr, arr + n); // sort(start , end)

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}