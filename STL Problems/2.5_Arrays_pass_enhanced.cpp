#include<bits/stdc++.h>

using namespace std;

int main(){

    //Q3
    int n;
    cout << "enter size of the array: ";
    cin >> n ;

    int arr[n];

    cout << "Enter array elements" << "\n";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int min=*min_element(arr,arr+n);

    cout << (min<35? "NO":"YES");

    // auto a=min_element(arr,arr+n);
    // cout << (a-arr)+1;
   
}