#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements" << "\n";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "Correct order is " << "\n" ;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}