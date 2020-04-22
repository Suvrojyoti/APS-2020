#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll P = 998244353;

ll mul(ll a, ll b)
{
    return (a * b) % P;
}
ll bpow(ll a, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
            res = mul(res, a);
        a = mul(a, a);
        n >>= 1;
    }
    return res;
}

 
int main()
{
    ll n;
    cin >> n;
    vector <ll> a(n), p(n);
    a[0] = 1;
    if (n >= 2)
        a[1] = 18;
    for (ll i = 2; i < n; ++i)
    {
        a[i] = mul(81 * i + 99, bpow(10, i - 2));
    }
    for (ll i = 0; i < n; ++i)
    {
        cout << mul(a[n - i - 1], 10) << " ";
    }
    return 0;
}