#include<bits/stdc++.h>

using namespace std;

int main(){

    cout << "Enter n and k" << '\n';

    int n;
    int k;

    cin >> n >> k;

    vector<string> str(n);

    cout << "Enter string list" << '\n';

    for(int i=0;i<n;i++){
        cin >> str[i];
    }


    cout << str[n-k] ;
}