#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        ll dp[3][n];
        dp[0][0] = 0;
        dp[1][0] = b[0];
        dp[2][0] = b[0] * 1ll * 2;
        for (ll i = 1; i <= n - 1; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                ll temp = 1e18;
                for (ll k = 0; k < 3; k++)
                {
                    if (a[i] + j != a[i - 1] + k)
                    {
                        temp = min(temp, dp[k][i - 1] + b[i] * 1ll * j);
                    }
                }
                dp[j][i] = temp;
            }
        }
        cout << min(dp[0][n - 1], min(dp[1][n - 1], dp[2][n - 1])) << endl;
    }
    return 0;
}