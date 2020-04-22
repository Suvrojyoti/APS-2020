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
ll sw,sh,fw,fh,tw,th,i,sum=0;
cin>>sw>>sh>>fw>>fh>>tw>>th;
for(i=sh;i>=0;i--)
{
    sw += i;
    if(fh==i)
        sw-=fw;
    else if(th==i)
        sw-=tw;
       
    
    sw=max(0LL,sw);   
    
}
cout<<sw;
return 0;
}