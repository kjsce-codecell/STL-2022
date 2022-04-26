#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

//print function
void print(list<int> l){
    for(auto i:l){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    
    //custom implementation
    //declaration
    list<int> l1;
    list<int> l2(5);
    list<int> l3(5,1);
    
    //copy list
    list<int> l4(l3);

    //push
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);

    //print
    print(l1);

    //push
    l1.push_front(10);
    print(l1);

    //pop
    l1.pop_back();
    l1.pop_front();
    print(l1);

}


