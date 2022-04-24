#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

void print(unordered_map<int, int> m){
    for(auto i: m){
        cout<< i.first << "->" << i.second << "\n";
    }
}

int main(){
    //unsorted, no duplicates
    unordered_map<int,int> m;

    m[1]=10;
    m[2]=20;
    m[3]=30;
    m.insert({4,40});

    print(m);

    m.insert({4,40});

    print(m);

    cout << m.count(3) << endl;
    

}