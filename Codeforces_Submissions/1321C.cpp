#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
ll n,i,j,k;
string s;
cin>>n>>s;
ll cnt=0;
for(i=0;i<n;i++)
{
    ll idx=-1,mx=-1;
    for(j=0;j<s.length();j++)
    {
        if(((j>0 and s[j]==s[j-1]+1) or (j<s.length()-1 and s[j]==s[j+1]+1)) and s[j]>mx)
        {
            mx=s[j];
            idx=j;
        }
    }
    if(mx==-1)
        break;
    s.erase(s.begin()+idx);
    cnt++;
}
cout<<cnt<<endl;
return 0;
}