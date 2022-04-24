#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void print(set<int> s){
    for (auto i : s){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    // no duplicates, no modification
    // declaration
    set<int> s;

    // insertion
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(1);
    s.insert(4);


    cout << s.count(5) << endl;

    //print
    print(s);


    cout << s.count(5) << endl;

    //size
    cout << s.size() << endl;
    
    // returns address
    cout << *s.find(5) << endl;

}