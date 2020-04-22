#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a, ll b){ if(a % b == 0) return a / b; return a / b + 1;}
string s, s1;
set<pair<ll, ll>> st[30];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {

        int l;
        cin >> l;
        string s1, s2;
        cin >> s1 >> s2;

        map<char, int> mp;
        for (int i = 0; i < l; i++)
        {
            mp[s1[i]]++;
            mp[s2[i]]++;
        }

        int ans = -1;
        for (auto x : mp)
        {
            if (x.second % 2)
            {
                ans = 0;
                break;
            }
        }
        if (ans == 0)
        {
            cout << "No\n";
            continue;
        }

        vector<pair<int, int>> arr;
        for (int i = 0; i < l; i++)
        {

            if (s1[i] != s2[i])
            {

                int j;
                for (j = i + 1; j < l; j++)
                {
                    if (s1[j] == s1[i])
                    {
                        arr.push_back({j, i});
                        swap(s2[i], s1[j]);
                        break;
                    }
                }
                if (j < l)
                    continue;

                for (int j = i + 1; j < l; j++)
                {
                    if (s2[j] == s1[i])
                    {
                        arr.push_back({i + 1, j});
                        arr.push_back({i + 1, i});
                        swap(s2[j], s1[i + 1]);
                        swap(s1[i + 1], s2[i]);
                        break;
                    }
                }
            }
        }
        cout << "Yes\n";
        cout << arr.size() << endl;
        for (auto x : arr)
        {
            cout << x.first + 1 << ' ' << x.second + 1 << endl;
        }
    }
}