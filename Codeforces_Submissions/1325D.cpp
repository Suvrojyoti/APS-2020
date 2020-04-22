#include <bits/stdc++.h>
#define ll unsigned long long int
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
    ll u,v;
	cin>>u>>v;
	if(u>v)
	{
		cout<<-1;return 0;
	}
	if(u==v)
	{
		if(u==0){
			cout<<0;return 0;
		}
		cout<<1<<endl<<u;return 0;
	}
	if(u%2!=v%2)
	{
		cout<<-1;return 0;
	}
	ll x=(v-u)/2;
	ll k=x^u;
	if(k==x+u)
	{
		cout<<2<<endl<<x<<" "<<k;
	}
	else
	{
		cout<<3<<endl<<x<<" "<<x<<" "<<u<<endl;
	}
	return 0;
}