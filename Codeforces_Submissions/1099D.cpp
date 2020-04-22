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
vector <ll> v[100005];
ll n,arr[200005],vis[200005],sum=0;
bool flag=0;
void dfs(ll a,ll h,ll sm)
{
    if(vis[a])
    return;
    vis[a]=1;
    if(h!=1)
    {
    if(h%2)
    {
        // if(sm<arr[a])
        // {
        //     flag=1;
        //     cout<<"*";
        // }
        arr[a]=arr[a]-sm;
        sm+=arr[a];
    }
    else
    {
        ll mn=inf;
        for(auto it:v[a])
        {
            if(!vis[it])
            {
                mn=min(mn,arr[it]);
                if(arr[it]<sm)
                    flag=1;
            }
        }
        if(mn==inf)
            mn=0;
        // cout<<mn<<" ";
        arr[a]=max(0LL,mn-sm);
        sm+=arr[a];
    }
    }
    // cout<<a<<" "<<arr[a]<<" "<<sm<<endl;
    for(auto it:v[a])
    {
        if (!vis[it])
            dfs(it,h+1,sm);
    }
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
cin>>n;
ll temp,i,j;
for(i=2;i<=n;i++)
{
    cin>>temp;
    v[i].pb(temp);
    v[temp].pb(i);
}
for(i=1;i<=n;i++)
    cin>>arr[i];
dfs(1,1,arr[1]);
if(flag)
    cout<<-1<<endl;
else
{
    for(i=1;i<=n;i++)
        sum+=arr[i];
    cout<<sum;
}
return 0;
}