#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a, ll b){ if(a % b == 0) return a / b; return a / b + 1;}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll n,i,j,m;
cin>>n>>m;
ll arr[m+5][n+5];
for(i=1;i<=m;i++)
{
    for(j=1;j<=n;j++)
        cin>>arr[i][j];
}
ll alt=inf;
vector <ll> fans;
for(i=1;i<n;i++)
{
    vector <pair<ll,ll>> v;
    ll sum=0;
    for(j=1;j<=m;j++)
    {
        v.pb({arr[j][i]-arr[j][n],j});
        sum += (arr[j][i] - arr[j][n]);
    }
    sort(v.begin(),v.end());
    ll k=0;
    vector<ll> ans;
    while(k<=m and sum<0)
    {
        sum=sum-(v[k].first);
        ans.pb(v[k].se);
        k++;
    }
    if(ans.size()<alt)
    {
        alt=ans.size();
        fans=ans;
    }
}
cout<<alt<<endl;
for(auto it:fans)
    cout<<it<<" ";
cout<<endl;

return 0;
}