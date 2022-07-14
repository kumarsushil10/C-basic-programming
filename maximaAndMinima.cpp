#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter number of numbers :  ";
    cin >> n;
    int arr[n];
    cout << "Enter the number :  ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j, max, min;
    max = arr[0];
    min = arr[0];
    for (j = 0; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        if (arr[j] < min)
        {
            min = arr[j];
        }
    }
    cout << "Maxima is  " << max << endl;
    cout << "Minima is  " << min << endl;

    return 0;
}