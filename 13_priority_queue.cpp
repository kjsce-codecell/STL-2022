#include <bits/stdc++.h>
using namespace std;


void print(priority_queue<int> q){
    auto n=q;

    while(!n.empty()){
        cout<<n.top()<<" ";
        n.pop();
    }
    
    

}



int main() {
    
    priority_queue<int> q;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    print(q);
    
}