#include <bits/stdc++.h>

using namespace std;

void print(queue<int> q ){
    while(q.empty()==false){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    queue<int> q;

    //push
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //print
    print(q);

    //pop
    q.pop();
    print(q);

    //front
    cout << q.front() << endl;

    //back
    cout << q.back() << endl;

    
}