#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i,j;
    cin>>n;
    ll dp[2][n+3],arr[2][n+3];
    for(j=0;j<2;j++)
    {
        for(i=0;i<n;i++)
            cin>>arr[j][i];
    }
  /*  for(j=0;j<2;j++)
    {
        for(i=0;i<n;i++)
            cout<<arr[j][i]<<" ";
        cout<<endl;
    }*/
    if(n==1)
    {
        cout<<max(arr[0][0],arr[1][0]);
    }
    else if(n==2)
    {
        cout<<max(arr[0][0]+arr[1][1],arr[0][1]+arr[1][0]);
    }
    else
    {
        dp[0][0]=arr[0][0];
        dp[0][1]=arr[0][1]+arr[1][0];
        dp[1][1]=arr[1][1]+arr[0][0];
        dp[1][0]=arr[1][0];
        for(i=2;i<n;i++)
        {
            dp[0][i]=arr[0][i]+max(dp[1][i-1],dp[1][i-2]);
            dp[1][i]=arr[1][i]+max(dp[0][i-1],dp[0][i-2]);
        }
       /*  for(j=0;j<2;j++)
        {
        for(i=0;i<n;i++)
            cout<<dp[j][i]<<" ";
        cout<<endl;
        }*/
        cout<<max(dp[0][n-1],dp[1][n-1]);
    }
    return 0;
}