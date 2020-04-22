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

ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll n,m,i,j,k;
cin>>n>>m;
n--; m--;
string s;
for(i=0;i<n;i++)
    s+="D";
for(i=0;i<m;i++)
    s+="L";
bool flag=0;
ll cnt=0;

for(i=0;i<m+1;i++)
{
    if(!flag)
    {
        cnt+=n;
        for(j=0;j<n;j++)
            s+="U";
        flag=1;
    }
    else
    {
        cnt+=n;
        for(j=0;j<n;j++)
            s+="D";
        flag=0;
    }
    if(i<m)
    {
    s+="R" ;
    cnt++;
    } 

}
cout<<s.size()<<endl<<s<<endl;
return 0;
}