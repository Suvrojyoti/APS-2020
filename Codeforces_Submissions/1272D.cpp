#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define s second
#define f first
#define MOD 1000000007
// #define 
using namespace std;

const ll INF=1e18L + 5;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll arr[200000+5],dp[200000+5][2];
    ll n,i,j,k;
    
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    if(arr[1]>arr[0])
        dp[1][0]=2;
    else
    {
        dp[1][0]=1;
    }
    for(i=2;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            dp[i][0]=dp[i-1][0]+1;
            dp[i][1]=dp[i-1][1]+1;
            if(arr[i - 2] < arr[i])
                dp[i][1]=max(dp[i-2][0]+1,dp[i][1]);
        }
        else if(arr[i-2]<arr[i])
        {
            dp[i][0]=1;
            dp[i][1]=dp[i-2][0]+1;
        }
        else
        {
            dp[i][0]=1;
        }
        
        
    }
    ll mx=-1;
    for(i=0;i<n;i++)
        mx=max(max(mx,dp[i][0]),dp[i][1]);
    cout<<mx;
    return 0;
}