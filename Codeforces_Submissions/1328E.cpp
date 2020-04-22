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
const ll maxn = 2e5+5;
 
ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}
ll n,m,cnt;
vector <ll> adj[maxn];
map <ll,ll> parent,level;
map <ll, pair<ll,ll>> t;
bool vis[maxn];
 
void dfs(ll node, ll par)
{
    if(vis[node])
        return;
    vis[node]=1;
    parent[node]=par;
    level[node]=level[par]+1;
    t[node]={cnt,0};
    cnt++;
    for(auto it:adj[node])
    {
        if(!vis[it])
            dfs(it,node);
    }
    t[node].se=cnt;
    cnt++;
}
 
 
int main()
{
fastIO;
ll i,j,k,q,a,b,c;
cin>>n>>q;
for(i=1;i<n;i++)
{
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
}
dfs(1,0);
while(q--)
{
    map <ll,vector <ll> , greater <ll> > mp;
    unordered_set <ll> s1,s2;
    cin>>m;
    rep(i,0,m)
    {
        cin>>a;
        mp[level[a]].pb(a);
        s1.insert(level[a]);
        s2.insert(parent[a]);
    }
    if(s1.size()!=s2.size())
    {
        cout<<"NO\n";
        continue;
    }
    // cout<<s1.size()<<" "<<s2.size()<<endl;
    auto v=mp.begin()->se;
    ll mn=inf, mx=-1;
    for(auto it:v)
    {
        mx=max(mx,t[it].se);
        mn=min(mn,t[it].fi);
    }
    // cout<<mx<<" "<<mn<<endl;
    mp.erase(mp.begin()->fi);
    bool flag=0;
    for(auto it:mp)
    {
        auto v=it.se;
        ll perfect=0;
        auto itr=parent [v[0]];
        // for(auto itr:v)
        if(itr!=0)
        {
            // cout<<itr<<" "<<t[itr].fi<<" "<<t[itr].se<<endl;
            if(t[itr].fi<mn and t[itr].se>mx)
                perfect++;
        }
        if(perfect!=1 and itr!=0)
        {
            flag=1;
            break;
        }
        for(auto itr:v)
        {
            mx = max(mx, t[itr].se);
            mn = min(mn, t[itr].fi);
        }
 
    }
    if(flag)
    {
        cout<<"NO\n";
        continue;
    }
    cout<<"YES\n";
}
return 0;
}