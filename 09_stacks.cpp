#include<bits/stdc++.h>
using namespace std;

void print(stack<int> stack1){
   while(stack1.empty()==false){
       cout << stack1.top() << " ";
       stack1.pop();
   }
   cout << endl;
}

int main(){
    //declaration
    stack<int> stack1;

    //push
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);

    //accessing topmost element
    cout << stack1.top() << '\n';

    //print
    print(stack1);

    //popping
    stack1.pop();
    print(stack1);
    
}