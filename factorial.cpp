#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, j;
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter  ";
    cin >> n;
    int m;
    m = factorial(n);
    cout << m;
    return 0;
}