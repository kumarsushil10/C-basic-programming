#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, j;

int main()
{
    int n, sum;
    cout << "Enter :  ";
    cin >> n;
    int a = 0;
    cout << a << '\t';
    int b = 1;
    cout << b << '\t';
    while(--n)
    {

        sum = a + b;
        a = b;
        b = sum;
        cout << sum << "\t";
    }

    return 0;
}