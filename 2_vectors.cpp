#include<bits/stdc++.h>
using namespace std;
#define n 5

void print(vector<int> v){
    for (auto i=v.begin();i<v.end();i++){
        cout<<(*i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>  v;
    
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
    print(v);



    v.insert(v.begin()+2,5);
    print(v);


    v.pop_back();
    print(v);



    sort(v.begin(),v.end());
    print(v);



    reverse(v.begin(),v.end());
    print(v);



    vector<int> p_sum(n);
    partial_sum(v.begin(),v.end(),p_sum.begin());
    print(p_sum);

    int sum=0;
    cout<<accumulate(v.begin(),v.end(),sum)<<endl;


    sort(v.begin(),v.end());
    auto it2=upper_bound(v.begin(),v.end(),4);
    cout<<*it2<<endl;



    auto it=lower_bound(v.begin(),v.end(),4);
    cout<<v[it-v.begin()]<<endl;


    cout<<binary_search(v.begin(), v.end(),2)<<endl;

    cout<<count(v.begin(),v.end(),3);


}