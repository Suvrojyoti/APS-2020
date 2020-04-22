#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll test,a,b,c,n;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>n;
        if(n%3==0)
            cout<<a;
        else if(n%3==1)
            cout<<b;
        else
        {
            ll t=a^b;
                cout<<t;
        }
        cout<<endl;
        
    }
    return 0;
}