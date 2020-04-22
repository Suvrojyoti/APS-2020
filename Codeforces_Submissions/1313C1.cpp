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
const ll maxn = 500005;

ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}
ll n,ar[maxn],dp1[maxn], dp2[maxn], w[maxn];
int main()
{
    fastIO;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    stack<ll> s;
    dp1[0] = ar[0];
    s.push(0);
    ll ans = dp1[0];
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() and ar[i] < ar[s.top()])
            s.pop();
        if (s.empty())
            dp1[i] = ar[i] * (i + 1ll);
        else
        {
            dp1[i] = dp1[s.top()] + (ar[i] * (i - s.top()));
        }
        ans = max(ans, dp1[i]);
        s.push(i);
    }
    dp2[n - 1] = ar[n - 1];
    //  cout<<ans<<" ";
    while (!s.empty())
        s.pop();
    s.push(n - 1);
    ans = max(ans, dp2[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() and ar[i] < ar[s.top()])
            s.pop();
        if (s.empty())
            dp2[i] = ar[i] * (n - i);
        else
        {
            dp2[i] = dp2[s.top()] + (ar[i] * (s.top() - i));
        }
        ans = max(ans, dp2[i]);
        s.push(i);
    }
    //  cout<<ans<<" ";
    ll in = 0;
    if (dp1[n - 1] == ans)
        in = n - 1;
    if (dp2[0] == ans)
        in = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            ans = max(ans, dp1[i] + dp2[i + 1]);
            if (ans == dp1[i] + dp2[i + 1])
                in = i;
        }
    }

    ll cr = ar[in];
    w[in] = ar[in];
    for (int i = in - 1; i >= 0; i--)
    {
        w[i] = min(ar[i], w[i + 1]);
    }
    for (int i = in + 1; i < n; i++)
        w[i] = min(ar[i], w[i - 1]);
    for (int i = 0; i < n; i++)
        cout << w[i] << " ";
    return 0;
}