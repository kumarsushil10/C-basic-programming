/*      1
       232
      34543
     4567654
    567898765
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    int val;
    val = i;
    for (i = 1; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        val = i;
        for (j = 0; j <= 2 * i - 1; j++)
        {

            if (j < i)
            {
                cout << val;
                val += 1;
            }
            else if (j > i)
            {
                cout << val;
                val -= 1;
            }
            
        }
        cout << "\n";
    }

    return 0;
} 