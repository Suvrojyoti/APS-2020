#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll n, arr[105],mask[65],dp[105][1<<17],b[105][1<<17];

ll calc(ll k,ll msk)
{
    if(k==0) return 0;
    if(dp[k][msk]!=-1) return dp[k][msk];
    // cout<<dp[k][m]<<" ";
    dp[k][msk]=calc(k-1,msk)+abs(arr[k]-1);
    // cout<<dp[k][m]<<" k "<<k<<endl;
    b[k][msk]=1;
    for(int i=2;i<60;i++)
    {
        if((msk&mask[i])!=mask[i])
            continue;
        ll cal=calc(k-1,msk^mask[i])+abs(arr[k]-i);
        // cout<<cal<<"* "<<dp[k][m]<<"# ";
        if(cal<dp[k][msk])
        {
            dp[k][msk]=cal;
            b[k][msk]=i;
        }
    }
    // cout<<endl;
    return dp[k][msk];

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    memset(dp,-1,sizeof (dp));
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
        cin>>arr[i];
    // for(i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    vector <ll> prm;
    for(i=2;i<60;i++)
    {
        bool flag=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
            prm.pb(i);
    }
    for(i=1;i<=60;i++)
    {
        mask[i]=0;
        for(auto j=0;j<prm.size();j++)
        {            
            if(i%prm[j]==0)
                mask[i]|=(1<<j);
        }
    }
    // for(i=0;i<=60;i++)
    //     cout<<i<<" "<<mask[i]<<"\n";
    // cout<<endl;
    ll m=(1<<17)-1;
  //  cout<<calc(n , m)<<endl;
    //cout<<prm.size() ;
    calc(n , m);
    vector<ll> ans;
    for(i=n;i>0;i--)
    {
        // cout<<b[i][m]<<" ";
        ans.pb(b[i][m]);
        m=m^mask[b[i][m]];
    }
    reverse(ans.begin(),ans.end());
    for(auto it:ans)
        cout<<it<<" ";
    
    return 0;
}