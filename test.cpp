//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, j,k;

int main()
{
    int n;
    cout << "Enter number of numbers:  ";
    cin >> n;

    int arr[n];
    int sum =0;
    int max =0;
    cout << "Enter array :  ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int sum =0;
            for(k=i;k<=j;k++){
                sum += arr[k];
            }
            //cout<<sum<<' '<<endl;
            if(sum>max){
                max = sum;
            }
        }
    }
    cout <<"max = "<<max;

    return 0;
}