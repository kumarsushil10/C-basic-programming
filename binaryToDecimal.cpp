#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, ans = 0, rem;
    cin >> n;
    for(int i=0;n>0;i++)
    {
        p = pow(2, i);
        rem = n % 10;
        ans = ans + rem * p;
        n = n / 10;
        //cout << "i= " << i << " p = " << p << " rem = " << rem << " ans = " << ans<<'\n';
            
    }
    cout << ans;
}