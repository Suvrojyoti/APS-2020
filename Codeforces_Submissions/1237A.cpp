#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define s second
#define f first
#define MOD 1000000007
// #define
using namespace std;

const ll INF = 1e18L + 5;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, i, j, k;
    cin >> n;
    k = 0;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        if (j % 2 == 0)
        {
            cout << j / 2 << " ";
            continue;
        }
        else if (k)
        {
            if (j > 0)
                cout << j / 2 << " ";
            else
                cout << j / 2 - 1 << " ";
        }
        else
        {
            if (j > 0)
                cout << j / 2 + 1 << " ";
            else
                cout << j / 2 << " ";
        }
        k ^= 1;
    }
    return 0;
}