#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // logical operators < (less than) > (greater than) == (is equal to) <= (less than equal to) >= (greater than equal to)
    if (n < 100 && n > 0)
    {
        cout << "n is positive and less than hundred\n";
    }
    else if (n < 0)
    {
        cout << "n is negetive\n";
    }
    else{
        cout << "n is greater than hundred\n";
    //if-else ladder exited
    cout<<"Exit\n";}

    return 0;
}