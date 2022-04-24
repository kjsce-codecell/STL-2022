#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

//print function
void print(list<int> l){
    for(auto i=l.begin();i!=l.end();i++){
        cout << *i << " ";
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

    // //print
    // print(l1);

    l1.push_front(10);

    // print(l1);

    // //pop
    // l1.pop_back();
    // l1.pop_front();

    print(l1);

    // //remove
    // l1.remove(30);
    // print(l1);

    //erase
    l1.erase(l1.begin(),l1.end());
    print(l1);

    //clear
    l1.clear();
    print(l1);


    // //empty
    // cout << l1.empty() << endl;

    // //size
    // cout << l1.size() << endl;

    // //insert
    // int arr[] = {1,2,3,4,5};    
    // l1.insert(l1.end(),arr,arr+5);    
    // print(l1);

    // //resize
    // l1.resize(20,5);    
    // print(l1);   

    // //sort
    // l1.sort();
    // print(l1);

}


