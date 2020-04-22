#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int
const ll inf = 1000000000000000000;

int main()
{
    ll test,n,a,b,i;
    string s;
    cin>>test;
    while(test--)
    {
        cin>>n>>a>>b;
        cin>>s;
        ll dp[n+10][2];
        dp[0][0]=a+b;
        dp[0][1]=2*a+b;
        //cout<<dp[0][0]<<" "<<dp[1][0]<<endl;
        for(i=1;i<n;i++)
        {
            if(s[i]=='0')
            {
                dp[i][0]=min(dp[i-1][0]+a+b,dp[i-1][1]+a*2+b*2);
                dp[i][1]=min(dp[i-1][1]+a+b*2,dp[i-1][0]+a*2+b);
            }
            else
            {
                dp[i][0]=inf;
                dp[i][1]=dp[i-1][1]+a+2*b;
            }
            //cout<<dp[i][0]<<" "<<dp[i][0]<<endl;
        }
        cout<<dp[n-1][0]+b<<endl;
    }
    return 0;
}