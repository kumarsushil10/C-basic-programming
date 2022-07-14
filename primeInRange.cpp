#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, j;

bool isprime(int n)
{
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, count = 0;
    cout << "Enter number : ";
    cin >> n;
    for (j = 2; j <= n; j++)
    {
        if (isprime(j) == true)
        {
            cout << j << ' ';
            count += 1;
        }
    }
    cout << "\nTotal prime number between 1 and " << n << " is " << count;
    return 0;
}