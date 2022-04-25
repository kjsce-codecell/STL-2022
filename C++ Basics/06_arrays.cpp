#include <bits/stdc++.h>
using namespace std;
int main()
{

    //declaration
    int arr[]={1,2,3,4,5};
    //         0 1 2 3 4 

    //in stl
    array<int,5> arr2 = {1,2,3,4,5};

    // iterating through the array
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;

    char a[7]={"Pargat"};

    for(auto i:a){
        cout<<i<< " ";
    }
    cout << endl;

    //size
    cout << arr2.size() << endl;

    //front
    cout << arr2.front() << endl;

    //back
    cout << arr2.back() << endl;

    //fill
    arr2.fill(10);

    //sort
    sort(arr2.begin(),arr2.end());

    //reverse
    reverse(arr2.begin(),arr2.end());

    //issorted
    is_sorted(arr2.begin(),arr2.end());

    //max element
    cout << *max_element(arr2.begin(),arr2.end());

    //min element
    cout << *min_element(arr2.begin(),arr2.end());

    //binary search
    cout << binary_search(arr2.begin(),arr2.end(),4);


    return 0;

}