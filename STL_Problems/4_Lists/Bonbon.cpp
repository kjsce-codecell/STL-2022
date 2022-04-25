#include<bits/stdc++.h>

using namespace std;

int main(){

    cout << "enter number of elements";
    int n;
    cin >> n;

    list<int> ls;

    for(int i=0;i<n;i++){
        int element;
        cin >> element;

        int position;
        cin >> position;

        if(position==0){
            ls.push_front(element);
        }
        else{
            ls.push_back(element);
        }
    }

    for(auto i: ls){
        cout << i << " ";
    }

}