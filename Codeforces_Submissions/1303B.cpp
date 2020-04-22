#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
// #define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a,ll b)
{
    if(a%b==0)
        return a/b;
    return a/b +1;
}

ll n, g, b, lo, hi, i, j,h1,h2;

bool check(ll a)
{
    ll q=a/(b+g),rem=min(a%(b+g),g);
    if(q*g+rem>=h1 )
        return 1;
    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test;
    cin>>test;
    while(test--)
    {
        cin>>n>>g>>b;
        h1=ceel(n,2);   
        h2=n-h1;
        lo=n,hi=1e18;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            if (!check(mid))
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        cout<<lo<<endl;
        
    }
    return 0;
}