#include<bits/stdc++.h>
using namespace std;
# define n 5

void print(vector<int> v){
    
    for (auto i=v.begin();i<v.end();i++){
        cout<<(*i)<<" ";
    }
    cout<<endl;
}

int main(){

    //declaration
    vector<int>vec1={1,2,3,4,5};
    vector<int>vec2(5);
    vector<int>vec3(5,10);
    vector<int> v;
    
    //input
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //print
    print(v);

    //pop
    v.pop_back();
    print(v);

    //insert
    v.insert(v.begin()+2,5);
    print(v);

    //accumulate
    int sum=0;
    cout<<accumulate(v.begin(),v.end(),sum)<<endl;

    //partial sum
    vector<int> p_sum(4);
    partial_sum(v.begin(),v.end(),p_sum.begin());
    print(p_sum);

}