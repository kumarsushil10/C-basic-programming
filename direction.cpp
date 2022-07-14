#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0, y = 0;
    float d;
    string c;
    cout << "Enter direction ( n/s/e/w or  N/S/E/W ) :   ";
    cin >> c;

    for (int i = 0; i < size(c); i++)
    {
        if (c[i] == 'n' || c[i] == 'N')
        {
            y += 1;
        }
        else if (c[i] == 's' || c[i] == 'S')
        {
            y -= 1;
        }
        else if (c[i] == 'e' || c[i] == 'E')
        {
            x += 1;
        }
        else if (c[i] == 'w' || c[i] == 'W')
        {
            x -= 1;
        }
        else
        {
            cout << "Invalid direction ";
        }
    }
    cout << "coordinates from origin : "<< "(" << x << "," << y << ')' << endl;

    d = sqrt(pow(x, 2) + pow(y, 2));
    cout << "Distance from origin : " << d << endl;
}