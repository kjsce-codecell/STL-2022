#include <iostream>
#include <map>

using namespace std;

void print(map<int, int> m){
    for(auto i: m){
        cout<< i.first << "->" << i.second << "\n";
    }
}

int main(){
    //sorted, no duplicates
    map<int,int> m;

    m[1]=10;
    m[2]=20;
    m[3]=30;
    m.insert({4,40});

    print(m);

    m.insert({4,40});

    print(m);

    cout << m.count(3) << endl;
    

}