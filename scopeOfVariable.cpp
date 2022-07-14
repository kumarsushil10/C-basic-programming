#include <iostream>
using namespace std;

int x = 100; // Global Scope

int main()
{
    int x = 10; // Local scope
    cout << x;  
}
// local has higher priority than global.
//global can be acesses from any { .....}