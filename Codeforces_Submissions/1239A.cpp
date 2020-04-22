#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
const int mx=1e5+10;
const int mod=1e9+7;

ll dp[mx];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n,m;
	cin>>n>>m;
	dp[1]=2,dp[2]=4;
	for(int i=3;i<=max(n,m);i++)
	{
	  dp[i]=dp[i-1]+dp[i-2];
	  dp[i]%=mod;
    }
    cout<<(dp[n]+dp[m]-2)%mod;
    return 0;
}