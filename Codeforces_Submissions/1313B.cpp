#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;
ll n,a,b;
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

    ll t, n, x, y;
    cin>>t;
    while (t--)
    {
        cin>>n>>x>>y;
        cout<<max(1ll, (min(x + y - n + 1, n)))<<" "<< min(x + y - 1, n)<<"\n";
    }
    return 0;
}