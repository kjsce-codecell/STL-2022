#include <bits/stdc++.h>
using namespace std;
int multiply(int a,int b){
    return a*b;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << accumulate(arr, arr + 5, 0) << endl;
    // accumulate (initial add, last add, initail sum value)
    return 0;
}