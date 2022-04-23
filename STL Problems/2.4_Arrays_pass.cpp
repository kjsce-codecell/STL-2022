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

    int min = 35;

    for(int i=0; i<n; i++){
        if (arr[i]<min){
           cout << "NO";
           return 0;
        }
    }

    cout << "YES";
    
   
}