#include <iostream>
#include <queue>

using namespace std;

int main(){

    //max heap
    priority_queue<int> p;

    //min heap
    priority_queue<int,vector<int>,greater<int> > p2;

    //push
    p.push(2);
    p.push(3);
    p.push(5);
    p.push(0);
    
    //print mistake
    // for( int i=0; i<p.size(); i++){
    //     cout << p.top();
    //     p.pop();
    // }

    //correct way
    int n=p.size();
    for(int i=0;i<n;i++){
        cout << p.top();
        p.pop();
    }


    cout << p.empty();



}