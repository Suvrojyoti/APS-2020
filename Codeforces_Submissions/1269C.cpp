#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll  n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll  arr[n + 1];

    for (ll  i = 0; i < n; i++)
    {
        arr[i + 1] = s[i] - '0';
    }

    ll  seq[n + 1];

    cout << n << endl;

    for (ll  i = 1; i <= n; i++)
    {
        if (i <= k)
            seq[i] = arr[i];
        else
            seq[i] = seq[i - k];
    }

    ll  f = 0;
    ll  g = 0;

    for (ll  i = 1; i <= n; i++)
    {

        if (g == 0 && seq[i] < arr[i])
        {
            f = 1;
            break;
        }
        else if (seq[i] > arr[i])
        {
            g = 1;
        }
    }

    if (f == 0)
    {
        for (ll  i = 1; i <= n; i++)
        {
            cout << seq[i];
        }
    }

    else
    {

        ll  c = 1;

        for (ll  i = k; i >= 1; i--)
        {
            ll  c1 = c;
            c = (seq[i] + c1) / 10;
            seq[i] = (seq[i] + c1) % 10;
        }

        for (ll  i = k + 1; i <= n; i++)
        {
            seq[i] = seq[i - k];
        }

        for (ll  i = 1; i <= n; i++)
            cout << seq[i];
    }

    return 0;
}