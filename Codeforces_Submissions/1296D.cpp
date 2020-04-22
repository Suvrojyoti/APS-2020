#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll n,a,b,k,i,j,sum=0,temp;
cin>>n>>a>>b>>k;
vector <ll> v;
ll ptr = 0;
for(i=0;i<n;i++)
{
    cin>>temp;
    if(temp%(a+b)==0)
        v.pb(b);
    else if(temp%(a+b)>a)
        v.pb(temp%(a+b) - a);
    else ptr++;
}
sort(v.begin(),v.end());

for(auto it:v)
{
    ll t=ceel(it,a);
    if(t>k)
        break;
    else
    {
        ptr++;
        k-=t;
    }
    
}
cout<<ptr<<endl;
return 0;
}