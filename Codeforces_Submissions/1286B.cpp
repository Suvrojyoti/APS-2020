#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;
 
ll ceel(ll a, ll b){ if(a % b == 0) return a / b; return a / b + 1;}
ll n,cnt=1,cost[2005],vis[20005];
vector <ll> v[3000];
bool flag=0;
vector<pair<ll, ll>> dfs(ll a)
{
    vector <pair<ll,ll>> vec;
    if(vis[a] or flag)
        return vec;
    vis[a]=1;
    for(auto it:v[a])
    {
        if(!vis[it])
        {
            auto temp=dfs(it);
            vec.insert(vec.end(),temp.begin(),temp.end());
        }
    }
    if(cost[a]>vec.size())
    {
        flag=1;
        return vec;
    }
    if(cost[a]==vec.size())
    {
        vec.pb({cnt,a});
        cnt++;
        return vec;
    }
    sort(vec.begin(),vec.end());
    ll th=vec[cost[a]].first;
    for(ll i=cost[a];i<vec.size();i++)
    {
        ++vec[i].first;
    }
    vec.pb({th,a});
    cnt++;
    return vec;

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll i,j,a,b,root;
cin>>n;
rep(i,1,n+1)
{
    cin>>a>>b;
    if(a==0)
        root=i;
    else
    {
        v[i].pb(a);
        v[a].pb(i);
    }
    cost[i]=b;
}
vector<pair<ll,ll>> vec=dfs(root);
if(flag)
{
    cout<<"NO\n";
    exit(0);
}
ll arr[n+5];
cout<<"YES\n";
for(auto it:vec)
    arr[it.second]=it.first;
rep(i,1,n+1)
    cout<<arr[i]<<" ";
return 0;
}