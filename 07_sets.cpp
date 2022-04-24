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
    set<int>set1 = {1,2,3,4,5};
    set<int> s;

    // insertion
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(1);
    s.insert(4);

    //print
    print(s);

    //size
    cout << s.size() << endl;

    //clear
    s.clear();
    print(s);

}