#include<bits/stdc++.h>

using namespace std;

int main(){

    //Q1
    int n;
    cout << "enter size of the array: ";
    int arr[n];

    cin >> n ;

    cout << "Enter array elements" << "\n";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << arr[n/2];


}