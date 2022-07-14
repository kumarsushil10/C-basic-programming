#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int rem;
int sm = 0;
while(n>0)
{
    rem = n%10;
    sm = sm + rem;
    n = n/10;
}
cout << sm ;

    return 0;
}