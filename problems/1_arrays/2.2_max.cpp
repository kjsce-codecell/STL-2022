#include<bits/stdc++.h>

using namespace std;

int main(){

    //Q2
    int n;
    cout << "enter size of the array: ";
    cin >> n ;

    int arr[n];

    cout << "Enter array elements" << "\n";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans=*max_element(arr,arr+n);

    
    cout << "max element is " << ans;



}