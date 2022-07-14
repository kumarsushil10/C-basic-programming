#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, j;

int main()
{
    int n, d, z = 0;
    cout << "Enter number : ";
    cin >> n;
    for (i = 1; n >= d; i++)
    {
        d = pow(5, i);
        if (n >= d)
        {
            z += n / d;
        }
    }
    cout << "Number of 0's in " << n << "! is " << z << endl;
    return 0;
}