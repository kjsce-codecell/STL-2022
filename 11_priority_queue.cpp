#include<bits/stdc++.h>

using namespace std;

void print(priority_queue<int> pq){
    while(pq.empty()==false){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main(){

    //max heap
    priority_queue<int> pq;

    //min heap
    priority_queue<int,vector<int>,greater<int> > p2;

    //push
    pq.push(2);
    pq.push(3);
    pq.push(5);
    pq.push(0);

    //print
    print(pq);

    //top
    cout << pq.top() << endl;

    //pop
    pq.pop();
    print(pq);

    //empty
    cout << pq.empty() << endl;


}