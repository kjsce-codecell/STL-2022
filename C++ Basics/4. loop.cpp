#include <bits/stdc++.h>
using namespace std;
int main()
{
    //syntax for the for loop
    cout<<"\n\nFor loop\n";
    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;
    }

    //syntax for the while loop
    cout<<"\n\nWhile loop\n";
    int i=0;
    while(i<10)
    {
        cout<<i<<endl;
        i++;
    }

    //syntax for do-while loop
    cout<<"\n\nDo while loop\n";
    do{
        cout<<i<<endl;
        i--;
    }
    while(i>10);
    return 0;
}