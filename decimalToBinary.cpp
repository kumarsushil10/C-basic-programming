#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem=0;
    while(n>0){
        rem = 10*rem + n%2;
        n=n/2;

    }
    cout<<rem;
    return 0;
}