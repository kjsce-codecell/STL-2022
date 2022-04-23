#include <iostream>
#include <map>

using namespace std;

int main(){
    //sorted, no duplicates
    map<int,string> m;

    m[1]="pranay";
    m[2]="gaurish";
    m[3]="kashvi";
    m.insert({4,"pargat"});

    for(auto i: m){
        cout<< i.first << "->" << i.second << "\n";
    }

    m.insert({4,"arya"});

    for(auto i: m){
        cout<< i.first << "->" << i.second << "\n";
    }

    m.count(3);
    m.erase(3);

    // returns iterator
    m.find(2);

}