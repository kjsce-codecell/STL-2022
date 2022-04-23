#include<bits/stdc++.h> 

using namespace std;

int main (){
    cout << "Enter the size: ";
    int n;
    cin >> n;

    pair<int,int> parity[n];

    for(int i=0;i<n;i++){
        cin >> parity[i].first >> parity[i].second ;
    }

    int count=0;

    for(int i=0;i<n;i++){
        if((parity[i].first)%2 == (parity[i].second)%2){
            count++;
        }
    }

    cout << "Number of pairs is: " << count;

}
