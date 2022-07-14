// Square root of given number

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter the number:  ";
    cin >> n;

    int sqrt1;
    sqrt1 = pow(n, 0.5);
    cout << sqrt1;

    float sqrt;
    sqrt = pow(n, 0.5);
    cout << "\nsquareroot is " << sqrt;

    return 0;
}