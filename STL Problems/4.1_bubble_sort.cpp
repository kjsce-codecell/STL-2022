#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int *arr, int n){
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped=false;

        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }

        if(swapped==false){
            break;
        }
    }
}

 void print(int *arr,int n){

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }

// void swap(int *a, int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements" << "\n";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    print(arr,n);

}



