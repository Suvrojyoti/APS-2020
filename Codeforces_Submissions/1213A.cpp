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

    ll n,a,o,e;
    o=e=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)
            e++;
        else
        {
            o++;
        }
        
    }
    cout<<min(e,o);
    return 0;
}