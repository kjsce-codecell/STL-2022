#include <iostream>
#include <queue>
#include<algorithm>

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

    //front
    cout << q.front() << endl;

    //back
    cout << q.back() << endl;

    //pop
    q.pop();

    print(q);

    //empty
    cout << q.empty() << endl;

    //size
    cout << q.size() << endl;

    cout << binary_search(q.front(),q.back(),20);

    
}