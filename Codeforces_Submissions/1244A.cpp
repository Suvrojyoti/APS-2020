#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll mod (ll a,ll b)
{
    if(a%b==0)
        return a/b;
    else
    {
        return (a/b)+1;
    }
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    while(test--)
    {
        ll a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        ll t=mod(a,c)+mod(b,d);
        if(t<=k)
            cout<<mod(a,c)<<" "<<mod(b,d)<<endl;
        else
        {
            cout<<"-1"<<endl;
        }
        
    }
    return 0;
}