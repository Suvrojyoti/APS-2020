#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';} cout << endl;
#define mod 1000000007
#define inf 1e18
using namespace std;
const ll INF = 1e18L + 5;
const ll maxn = 100;
ll ceel(ll a, ll b)
{
   if (a % b == 0)
       return a / b;
   return a / b + 1;
}
ll modneg(ll a,ll m)
{
    a = a % m;
    if(a<0)
        a=a+m;
    return a;
}
ll powermod(ll x, unsigned ll y, ll p){ll res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); };

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,n,l,r,i,j,k;
cin>>test;
while(test--)
{
    cin>>n>>l>>r;
    ll arr[n+5];
    arr[1]=0;
    for(i=2;i<=n;i++)
    {
        arr[i]=(n-i+1)*2;
    }
    arr[n+1]=1;
    for(i=2;i<=n+1;i++)
    {
        arr[i]+=arr[i-1];
    }
    // rep(i,1,n+1)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    ll f=1;
    for(i=l;i<=r;i++)
    {
        if(i==1 or i==arr[n+1])
            cout<<f<<" ";
        else
        {
            
            if(*lower_bound(arr+1,arr+n+1,i)==i)
            {
                cout<<n<<" ";
            }
            else
            {
                ll t = lower_bound(arr + 1, arr + n + 1, i)-(arr);
                ll idx=t-1;
                // cout<<t<<"*";
                if((i-arr[idx])%2)
                    cout<<idx<<" ";
                else
                {
                    cout<<idx+(i-arr[idx])/2<<" ";
                }
            }
        }

    }
    cout<<endl;
}
return 0;
}