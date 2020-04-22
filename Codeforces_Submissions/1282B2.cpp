#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
// #define
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn=2e5+5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test,n,p,k,arr[maxn],i,j,dp[maxn],cost[maxn];
    cin>>test;
  
    while (test--)
    {
        
        cin>>n>>p>>k;
        for(i=1;i<=n;i++)        
            cin>>arr[i];
        sort(arr+1,arr+n+1);
        dp[0]=0,dp[1]=arr[1];
        i=1;
        ll mx=0;
        while(i<=n-1)
        {
            //cout<<dp[i];
            if (dp[i] <= p)
                mx = max(mx, i);
            i++;
            if(i>=k)
            {
                dp[i]=arr[i]+dp[i-k];
            }
            else
            {
                dp[i]=dp[i-1]+arr[i];
            }
            if(dp[i]<=p)
                mx=max(mx,i);
            
        }
        
        cout<<mx<<endl;
    }
    return 0;
}