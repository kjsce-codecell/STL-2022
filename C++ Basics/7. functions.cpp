#include <bits/stdc++.h>
using namespace std;
void print(string *n, int size)   //void states that there is no return type
{
    for (int i = 0; i < size; i++)
        cout << n[i] << endl;
    cout<<endl<<endl;
}
int main()
{
    string names[] = {"Pargat", "Arya", "Gaurish", "Pranay", "Kashvi"};
    int size = sizeof(names) / sizeof(string);
    cout << "Size is: " << size << endl;
    print(names , size);

    
    // The sort function sorts an array or a vector using the best algo
    // sort(names,names+size);
    print(names,size);
    if (binary_search(names, names + size, "Pargat")) // why is this not working?
        cout << "Name found!";
    return 0;
}