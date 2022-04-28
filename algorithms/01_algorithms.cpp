#include <bits/stdc++.h>

using namespace std;

void print(vector<int> v){
    for (auto i: v){
        cout<< i <<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //print
    print(v);

    //intro sort - quuick sort + insertion sort + heap sort
    sort(v.begin(),v.end());
    print(v);

    //compare min max
    cout << max(v[1],v[3]) <<endl;
    cout << min(v[1],v[3]) <<endl;

    //min element max element
    cout << *min_element(v.begin(),v.end());
    cout << *max_element(v.begin(),v.end());

    //swap
    swap(v[1],v[5]);
    print(v);

    //reverse
    reverse(v.begin(),v.end());
    print(v);

    //binary search
    cout << binary_search(v.begin(),v.end(),3) << endl;

    //lower bound/upper bound, returns iterator
    cout << *lower_bound(v.begin(),v.end(),5) << endl;
    cout << *upper_bound(v.begin(),v.end(),5) << endl;

    //partial sum
    vector<int> p_sum(5);
    partial_sum(v.begin(),v.end(),p_sum.begin());
    print(p_sum);

    //accumulate
    int sum=0;
    cout<<accumulate(v.begin(),v.end(),sum)<<endl;

    //rotate
    rotate(v.begin(),v.begin()+1,v.end());
    print(v);

   
}

