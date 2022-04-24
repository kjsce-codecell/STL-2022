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

    int max= arr[0];

    for(int i=0; i<n; i++){
        if (arr[i]>max){
            max=arr[i];
        }

    }

    cout << "max element is " << max;



}