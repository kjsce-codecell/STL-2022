#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
}

int binary_search(int arr[], int l, int r, int target){
    int mid=l + (r-l)/2;

    if(arr[mid]==target){
        return mid;
    }

    else if(arr[mid]>target){
        return binary_search(arr, mid+1, r, target);
    }

    else if(arr[mid]<target){
        return binary_search(arr, l, mid, target);
    }
}