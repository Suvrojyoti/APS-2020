#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin >> n;

    map<pair<ll, ll>, vector<ll>> q;

    ll st = 0;

    vector<ll> cnt(n);

    for (ll i = 0; i < n - 2; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        c--;

        q[{a, b}].push_back(c);
        q[{b, a}].push_back(c);
        q[{a, c}].push_back(b);
        q[{c, a}].push_back(b);
        q[{b, c}].push_back(a);
        q[{c, b}].push_back(a);

        cnt[a]++;
        cnt[b]++;
        cnt[c]++;

        /*cout << endl;
    for(ll j = 0; j < n; j++) cout << cnt[j] << " ";
    cout << endl;*/
    }

    for (ll i = 0; i < n; i++)
    {
        if (cnt[i] == 1)
        {
            //cout << st << " " << i << " " << cnt[i] << endl;
            st = i;
        }
    }

    ll pr1 = -1, pr2 = -1;
    for (ll i = 0; i < n; i++)
    {
        if (cnt[i] == 2 && pr1 == -1)
            pr1 = i;
        else if (cnt[i] == 2 && pr2 == -1)
            pr2 = i;
    }

    if (q.find({st, pr2}) != q.end())
    {
        pr1 = pr2;
    }

    //cout << st << " " << pr1 << endl;

    vector<ll> used(n);
    used[st] = 1;
    used[pr1] = 1;
    for (ll i = 0; i < n; i++)
    {
        cout << st + 1 << " ";
        ll x;
        for (ll j = 0; j < q[{st, pr1}].size(); j++)
        {
            if (!used[q[{st, pr1}][j]])
            {
                x = q[{st, pr1}][j];
                break;
            }
        }
        used[x] = 1;
        st = pr1;
        pr1 = x;
    }

    //cout << pr1 << endl;
    return 0;
}