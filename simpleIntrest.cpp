#include<iostream>
using namespace std;

int main(){
//Simple Intrest
int p;
cout<<"Enter the principal amount :  ";
cin >> p;
int r;
cout << "Enter the rate of intrest :  ";
cin >> r;
int t;
cout<<"Enter time(in Year) :  ";
cin>>t;
float si;
si = float(p*r*t)/100;
cout<< "Simple intrest = "<< si;
    return 0;
}