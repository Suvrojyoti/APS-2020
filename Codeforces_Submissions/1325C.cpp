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
const ll maxn = 1e5+5;

ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, m,u,v;
    ll a[maxn];
    vector<ll> adj[maxn];

    cin >> n;
    fill(a, a + maxn, -1);
    rep(i,1,n)
    {
        cin >> u >> v;
        adj[u].push_back(i);
        adj[v].push_back(i);
        
    }

    ll last = 0;
    rep(i,1,n+1)
    {
        if (adj[i].size() >= 3)
        {
            for (auto u : adj[i])
            {
                if (a[u] == -1)
                {
                    a[u] = last;
                    last++;
                }
            }
        }
    }

    rep(i,1,n)
    {
        if (a[i] == -1)
        {
            cout << last << "\n";
            last++;
        }
        else
            cout << a[i] << "\n";
    }
    return 0;
}