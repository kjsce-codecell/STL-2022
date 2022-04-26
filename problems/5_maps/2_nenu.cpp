#include<iostream>
#include<map>
#include <utility>
using namespace std;

int main(){

    int n;
    cin >> n;

    map<int,int> freq;

    //take input
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        freq[x]++;
    }

    //get max frequency
    pair<int,int> p;
    p.second=0;
    
    for(auto i:freq){
        if(i.second>p.second){
            p.second=i.second;
            p.first=i.first;
        }
    }

    cout <<p.first;
    
}