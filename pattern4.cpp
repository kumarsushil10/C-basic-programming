#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, j;



void pattern(int n)
{
    for (i = 0; i < n; i++)
    {
        char x = 'A';
        for (j = n - i; j > 0; j--)
        {
            cout << x;
            x++;
        }
        cout << '\n';
    }
}

int main()
{
    int n;
    cout << "Enter  ";
    cin >> n;

    pattern(n);

    return 0;
}