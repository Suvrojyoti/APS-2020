#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
// #define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,i,j,n,m;
cin>>test;
while(test--)
{
    cin>>n>>m;
    ll a,b,c;
    map <ll,pair<ll,ll>> mp;
    bool flag=0;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(mp.find(a)==mp.end())
        {
            mp[a]={b,c};
        }
        else
        {
            mp[a].first=max(mp[a].first,b);
            mp[a].second=min(mp[a].second,c);
        }
        if(mp[a].first>mp[a].second)
            flag=1;
        
    }
    // for(auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    // }
    ll l=m,h=m,t=0;
    // cout<<"*";
    for(auto it:mp)
    {
         l-=it.first-t;
         h+=it.first-t;
        if(h<it.second.first or l>it.second.second)
        {
            flag=1;
            break;
        }
        l=max(l,it.second.first);
        h=min(h,it.second.second);
        t=it.first;
    }
    if(flag)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
    }
    
}
return 0;
}