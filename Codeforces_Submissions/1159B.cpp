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
    ll n,i,t,mn=99999999999;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(i-1>0)
        mn=min(mn,t/(i-1));
        if(n-i>0)
        mn=min(mn,t/(n-i));
    }
    cout<<mn;
   // cout<<"hello";

}