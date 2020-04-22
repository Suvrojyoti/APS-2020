#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,o;
    cin>>x>>y;
    if(y<x-1||y>2*(x+1))
        cout<<"-1";
    else
    {
        while(x)
        {
            if(y-(x-1)>2)
            {
                o=2;
                y=y-2;
            }
            else
            {
                o=y-(x-1);
                y=x-1;
            }
            x--;
            while(o--)
                cout<<"1";
            cout<<"0";
        }
        while(y--)
            cout<<"1";
    }
    return 0;
}