#include <iostream>
#include <stack>

using namespace std;

void print(stack<int> s){
   while(s.empty()==false){
       cout << s.top() << " ";
       s.pop();
   }
   cout << endl;
}

int main(){
    //declaration
    stack<int> s;

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    

    //size
    cout << s.size() << '\n';

    //accessing topmost element
    cout << s.top() << '\n';

    //print
    print(s);

    //popping out elements
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    //empty
    cout << s.empty() << endl;
    
    
}