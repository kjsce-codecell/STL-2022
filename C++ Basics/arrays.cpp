#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    //         0 1 2 3 4 
    // arr[1]=9;
    // arr[3]=8;
    // int *ptr=arr;
    // ptr[1]=9;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl; // iterating through the loop

    char a[7]={"Pargat"};
    for(auto i:a)
        cout<<i<<endl;
    // cout<<*min_element(arr, arr+5)<<endl;
    return 0;
}