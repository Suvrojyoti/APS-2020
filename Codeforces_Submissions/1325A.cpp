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
ll test,n,i,j;
cin>>test;
while(test--)
{
    cin>>n;
    cout<<"1 "<<n-1<<endl;;
}
return 0;
}