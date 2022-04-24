#include <iostream>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    binary_search(v.begin(),v.end(),3);

    //returns iterator
    lower_bound(v.begin(),v.end(),5);
    upper_bound(v.begin(),v.end(),5);

    max(v[1],v[3]);
    swap(v[1],v[5]);

    string s="paranay";
    reverse(s.begin(),s.end());

    rotate(v.begin(),v.begin()+1,v.end());

    //intro sort - quuick sort + insertion sort + heap sort
    sort(v.begin(),v.end());
}

