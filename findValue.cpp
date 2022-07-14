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
    int val;
    cout << "Enter the value that u want to search: ";
    cin >> val;
    for (j = 0; j < n; j++)
    {
        if (arr[j] == val)
        {
            cout << "Yes , " << val << " is present at " << (j + 1) << " ." << endl;
            break;
        }
        if(j==n-1){
            cout<<"Sorry "<<val<<" is not present in given data .";
        }
        
    }
        
    return 0;
}