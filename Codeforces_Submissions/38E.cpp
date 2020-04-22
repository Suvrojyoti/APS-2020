#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
vector <vector<ll>> dp(3005,vector<ll>(3005,LLONG_MAX));
vector <pair<ll,ll>> vec;
ll n;

ll rec(ll pres,ll prev)
{
    if(pres==n)
        return 0;
    if(dp[pres][prev]!=LLONG_MAX)
        return dp[pres][prev];
   
    return dp[pres][prev] = min({dp[pres][prev], vec[pres].first - vec[prev].first + rec(pres + 1, prev), vec[pres].second + rec(pres + 1, pres)});
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll a,b,i,j;
cin>>n;
// vec.pb({0,0});
for(i=0;i<n;i++)
{
    cin>>a>>b;
    vec.pb({a,b});
}
sort(vec.begin(),vec.end());
cout<<rec(1,0)+vec[0].second<<endl;
return 0;
}