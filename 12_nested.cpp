#include <bits/stdc++.h>

using namespace std;

int main(){

    //declaration
    map< int, vector<int> >nest;
    
    //adding elements
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            nest[i].push_back(j+1);
        }
    }
    
    //printing elements
    for(int i=0;i<10;i++){
    
        cout<<"key "<< i <<": ";
        for(auto k : nest[i]){
            cout<< k <<" ";
        }
        cout<< "\n";
    }
}