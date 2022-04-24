#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10; // add
    int* b = &a;
    cout << b << endl;
    cout << &a << endl;
    a=100;
    cout << *b << endl;
    return 0;
}