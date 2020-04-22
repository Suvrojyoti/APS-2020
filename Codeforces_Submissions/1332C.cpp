#include <bits/stdc++.h>
#define ll unsigned long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
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
ll lcm(ll a,ll b){    return (a*b)/__gcd(a,b);};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t, i, j, tt, k, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string s;
        cin >> s;
        ll ans = 0;
        for (i = 0; i < (k + 1) / 2; i++)
        {
            ll francis[27];
            memset(francis, 0, sizeof(francis));
            sort(francis,francis+4);
            for (j = i; j < n; j += k)
            {
                ll opis = j / k;
                ll lioz = j - k * opis;
                ll otis = k * (opis + 1) - lioz - 1;
                if (otis != j)
                    francis[s[otis] - 'a']++;
                francis[s[j] - 'a']++;
            }
            ll mx = 0, bull = 0;
            rep(j, 0, 27)
            {
                mx = max(mx, francis[j]);
                bull += francis[j];
            }
            ans += bull - mx;
            sort(francis,francis+25);
        }
        
        cout << ans << endl;
    }
    return 0;
}