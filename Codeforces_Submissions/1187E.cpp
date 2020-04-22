#include <bits/stdc++.h>
using namespace std;
long long int vis[200005],n,size[200005],dp[200005],mx=-1;
vector <long long int> v[200005];
void calsize(long long int u)
{
    vis[u]=1;
   
    for(auto itr:v[u])
    {
        if(!vis[itr])
        {
            calsize(itr);
            size[u]+=size[itr];
        }
    }
    size[u]++;
}

long long int dp_cal(long long int u)
{
    vis[u]=1;
    dp[u]=size[u];
    for(auto itr:v[u])
    {
        if(!vis[itr])
        {
            dp[u]+=dp_cal(itr);
        }
    }
    return dp[u];
}

void dfs(long long int u)
{
    mx=max(mx,dp[u]);
    vis[u]=1;
    for(auto itr:v[u])
    {
        if(!vis[itr])
        {
            dp[u]-=dp[itr];
            dp[u]-=size[itr];
            size[u]-=size[itr];
            size[itr]+=size[u];
            dp[itr]+=dp[u];
            dp[itr]+=size[u];
            dfs(itr);
            dp[itr]-=dp[u];
            dp[itr]-=size[u];
            size[itr]-=size[u];
            size[u]+=size[itr];
            dp[u]+=dp[itr];
            dp[u]+=size[itr];
        }
    }
}

int main()
{
  long long int a,b,i;
  cin>>n;
  for(i=1;i<n;i++)
  {
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  calsize(1);
  memset(vis,0,(n+5)*(sizeof(vis[0])));
  dp_cal(1);
  memset(vis,0,(n+5)*(sizeof(vis[0])));
  dfs(1);
  /*for(i=1;i<=n;i++)
    cout<<size[i]<<" ";
  cout<<endl;
  for(i=1;i<=n;i++)
    cout<<dp[i]<<" ";*/
    cout<<mx;
return 0;
}