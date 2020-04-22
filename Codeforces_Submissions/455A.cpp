#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,arr[200005],j,dp[200005],i,cnt[200005]={0};
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        cnt[arr[i]]++;
    }
    dp[0]=0;
    dp[1]=cnt[1];
    for(i=2;i<=100005;i++)
        dp[i]=max(dp[i-1],cnt[i]*i+dp[i-2]);
    cout<<dp[100005];
    return 0;
}