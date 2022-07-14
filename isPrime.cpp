#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cout << "Enter number :  ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime number " << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << n << " is prime number";
    }
    return 0;
}