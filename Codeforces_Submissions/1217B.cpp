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


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,n,d,i,a,b;
cin>>test;
while (test--)
{
    cin>>n>>d;
    ll mx=-1,diff=-1;
    for(i=0;i<n;i++) 
    {
        cin>>a>>b;
        mx=max(mx,a);
        diff=max(diff,a-b);
    }   
    if(diff<=0 and mx<d)
    {
        cout<<"-1\n";
        continue;
    }
    // cout<<mx<<" "<<diff<<" ";
    if(mx>=d)
    {
        cout<<"1\n";
        continue;
    }
    cout<<ceel(max((d-mx),0LL),diff)+1<<endl;
}
return 0;
}