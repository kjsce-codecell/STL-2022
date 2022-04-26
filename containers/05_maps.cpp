#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

void print(map<int, int> m){
    for(auto i: m){
        cout<< i.first << "->" << i.second << "\n";
    }
}

int main(){

    //declaration

    //sorted, no duplicates
    map<int,int> map1;
    
    //unsorted, no duplicates
    unordered_map<int,int> map2;

    map<string,int>map3;
    map3["Bob"]++;

    map1[1]=10;
    map1[2]=20;
    map2[3]=30;

    //insert
    map1.insert({4,40});

    //print
    print(map1);
    

}