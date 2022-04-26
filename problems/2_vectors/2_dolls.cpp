#include<bits/stdc++.h>

using namespace std;

int main(){
    cout << "Enter the size: ";
    int n;
    cin >> n;

    vector<int> dolls(n);

    for(int i=0;i<n;i++){
      cin >> dolls[i];  
    }

    sort(dolls.begin(),dolls.end());

    for(int i=0;i<n;i++){
      cout << dolls[i]<< " ";
    }

}