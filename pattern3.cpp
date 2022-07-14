#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,i,j;
    cout<<"Enter length : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < 2*i-1; j++)
        {
            if (i % 2 != 0) // odd
            {
                if (j % 2 != 0) // odd
                {
                    cout << '0';
                }
                else // even
                {
                    cout << '1';
                }
            }
            else // even
            {
                if ( j % 2 == 0) // even
                {
                    cout << '0';
                }
                else
                {
                    cout << '1';
                }
            }
        }
        cout << '\n';
    }

    return 0;
}