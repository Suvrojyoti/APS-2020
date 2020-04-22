#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;
ll n,s;
vector<pair<ll, ll>> vec;
bool ok(ll m)
{
    vector <ll> v;
    ll sum=0,cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(vec[i].second<m)
            sum+=vec[i].first;
        else if(vec[i].first>=m)
        {
            sum+=vec[i].first;
            cnt++;
        }
        else
        {
            v.pb(vec[i].first);
        }
        
    }
    ll need=max((ll)0,(n+1)/2 - cnt);
    if(need>v.size())
        return false;
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++)
    {
        if(i<v.size()-need)
            sum+=v[i];
        else
        {
            sum+=m;
        }
        
    }
    return sum<=s;

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,a,b,i,j;
cin>>test;
while(test--)
{
    vec.clear();
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        vec.pb({a,b});
    }
    sort(vec.begin(),vec.end());
    ll low=0,hi=1e9+99;
    while(hi-low>1)
    {
        ll m=(low+hi)/2;
        if(ok(m))
            low=m;
        else
        {
            hi=m;
        }
        
    }
    cout<<low<<endl;

}
return 0;
}