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

    ll n;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll x = i / 4, y = j / 4;
            ll p = 16 * (x * (n / 4) + y);
            p += (i % 4) * 4 + (j % 4);
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}