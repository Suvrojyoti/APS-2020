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
    ll n,m,i,j,sum;
    vector <ll> a,b;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        a.pb(temp);
    }
    for (i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        b.pb(temp);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // set <ll> s;
    ll ans=INF;
    for(i=0;i<n;i++)
    {
        ll df=(b[i]-a[0]+m)%m;
        vector<ll> now;
        for(j=0;j<n;j++) 
            now.pb((a[j] + df) % m);
        sort(now.begin(),now.end());
        if (now == b)
            ans = min(ans, df);
    }
    cout<<ans<<endl;
    return 0;
}