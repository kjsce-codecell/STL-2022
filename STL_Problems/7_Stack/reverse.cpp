#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    stack<int> s;

    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        while(s.empty()==false){
            cout << s.top() << " ";
            s.pop();
        }
    }

}

