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
    vector<int> v;
    
    //input
    for(int i=5;i>=0;i--){
        v.push_back(i);
    }

    print(v);

    // //insert
    // v.insert(v.begin()+2,5);

    // print(v);

    // //pop
    // v.pop_back();
    // print(v);

    // //sort
    // sort(v.begin(),v.end());
    // print(v);

    // //reverse
    // reverse(v.begin(),v.end());
    // print(v);

    // //partial sum
    // vector<int> p_sum(n);
    // partial_sum(v.begin(),v.end(),p_sum.begin());
    // print(p_sum);

    // //accumulate
    // int sum=0;
    // cout<<accumulate(v.begin(),v.end(),sum)<<endl;

    // //upper bound
    // sort(v.begin(),v.end());
    // auto it2=upper_bound(v.begin(),v.end(),4);
    // cout<<*it2<<endl;

    // //lower bound
    // auto it=lower_bound(v.begin(),v.end(),4);
    // cout<< *it <<endl;

    // //binary search
    // cout<<binary_search(v.begin(), v.end(),2)<<endl;

    // //count
    // cout << count(v.begin(),v.end(),3);


}