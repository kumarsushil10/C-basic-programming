#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int digits = 0;
    int alpha = 0;
    int space = 0;
    int spclchr = 0;
    char s;
    cout << "say some thing :  ";
    s = cin.get();
    while (s != '$')
    {
        if (s >= '0' and s <= '9')
        {
            digits += 1;
        }
        else if ((s >= 'a' or s >= 'A') and (s <= 'z' or s <= 'Z'))
        {
            alpha += 1;
        }
        else if (s == ' ' or s == '\t' or s == '\n')
        {
            space += 1;
        }
        else
        {
            spclchr += 1;
        }
        s = cin.get();
    }
    cout << "Number =  " << digits << endl;
    cout << "Alphabat =  " << alpha << endl;
    cout << "Space =  " << space << endl;
    cout << "Special charactor =  " << spclchr << endl;
    return 0;
}