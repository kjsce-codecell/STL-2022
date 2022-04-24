#include <iostream>
#include <deque>
#include<algorithm>

using namespace std;

//print
void print(deque<int> d){
    while(d.empty()!=false){
        cout << d.front();
        d.pop_front();
    }
    cout << endl;
}

//print reverse
void print_reverse(deque<int> d){
    while(d.empty()!=false){
        cout << d.back();
        d.pop_back();
    }
    cout << endl;
}

int main() {

//declaration
deque <int> d;

//push
d.push_back(20);
d.push_back(30);
d.push_back(40);
d.push_back(50);
d.push_front(10);

print(d);

//front and back
cout << d.front() << endl;
cout << d.back() << endl;

print_reverse(d);

//pop
d.pop_front();
d.pop_back();

print(d);

//erase
d.erase(d.begin(),d.end());

//acces the element
cout << d.at(1) << endl;

//empty?
cout << d.empty() << endl;

//size
cout << d.size() << endl;

}
