#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //declaration
    pair<int, int> coordinates = {1, 2};
    pair<string, int> StudentMarks = {"Raj", 55};

    //accessing elements
    cout << coordinates.first << endl;
    cout << coordinates.second << endl;

    //array of pair
    pair<int, int> coord[5];
    coord[0] = {1, 1};

    //accessing elements
    coord[1].first = 1;
    coord[1].second = 2;
    
    //printing all elements at once
    for (int i = 0; i < 5; i++)
    {
        cout << coord[i].first << " " << coord[i].second << "\n";
    }
    
}