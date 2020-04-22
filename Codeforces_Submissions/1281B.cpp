#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
// #define
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn=205;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;

    cin >> t;

    for (ll _ = 0; _ < t; _++)
    {
        string s, c;
        ll con[26] = {};

        cin >> s >> c;

        for (ll i = 0; i < s.size(); i++)
        {
            con[s[i] - 'A']++;
        }

        if (s < c)
        {
            cout << s << endl;
            continue;
        }

        for (ll i = 0; i < s.size(); i++)
        { //cout<<"i = "<<i<<endl;
            ll num = -1;
            for (ll j = 0; j < (s[i] - 'A'); j++)
            {
                if (con[j])
                {
                    num = j;
                    break;
                }
            }

            if (num != -1)
            {
                for (ll j = s.size() - 1; j > i; j--)
                { // cout<<"j = "<<j<<endl;
                    if (num == s[j] - 'A')
                    {
                        swap(s[i], s[j]);
                        break;
                    }
                }
                break;
            }

            con[s[i] - 'A']--;
        }

        //cout<<s<<endl;

        if (s < c)
        {
            cout << s << endl;
        }
        else
        {
            cout << "---" << endl;
        }
    }

    return 0;
}