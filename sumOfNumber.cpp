#include<iostream>
using namespace std;
int main(){
int n;
cout << "Enter the length of number :  ";
cin>> n;
int sm ;

sm = (n*(n+1))/2;
cout << "Sum of number is : "<< sm ;

//method 2
/*sm=0;
int i;
for(i=0;i<=n;i++){
    sm = sm + i;
}
cout<< "Sum of number is : " << sm ;
*/

    return 0;
}