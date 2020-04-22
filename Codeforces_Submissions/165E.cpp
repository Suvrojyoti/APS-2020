#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';} cout << endl;
ll powermod(ll x, unsigned ll y, ll p){ll res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define mod 1000000007
#define inf 1e18
using namespace std;
const ll INF = 1e18L + 5;
const ll maxn = 4194314;
ll ceel(ll a, ll b)
{
   if (a % b == 0)
       return a / b;
   return a / b + 1;
}
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); };

unsigned int onesComplement(unsigned int n)
{
    // Find number of bits in the given integer
    int number_of_bits = 22 ;

    // XOR the given integer with poe(2,
    // number_of_bits-1 and print the result
    return ((1 << number_of_bits) - 1) ^ n;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, i, j, k, a[maxn], f[maxn];

    cin >> n;
    ll arr[n+5];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        a[arr[i]]=arr[i];
    }
    ll N=22;
    memset(f,0,sizeof(f));
    for (i = 0; i < (1 << N); ++i)
        f[i] = a[i];
    for (i = 0; i < N; ++i)
        for (ll mask = 0; mask < (1 << N); ++mask)
        {
            if (mask & (1 << i))
                if ( f[mask ^ (1 << i)] >0)
                    f[mask] = f[mask ^ (1 << i)];
        }
    for(i=0;i<n;i++)
    {
        ll cmpl=f[onesComplement(arr[i])];
        if(cmpl==0)
            cmpl=-1;
        // cout<<onesComplement(arr[i])<<"* ";
        // cout<<f[cmpl]<<" ";
        cout<<cmpl<<" ";
    }
    return 0;
}