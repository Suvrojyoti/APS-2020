#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll mx=0,dp[1000005];

void printDivisors(ll n) 
{ 
    
    vector<ll> v;
    ll m=0;
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            if (n/i == i) 
                v.push_back(i);
            else
            { 
               v.push_back(i) ;
  
                
                ll k=n/i;
                if(k<=mx+1)
                {
                    dp[k]=(dp[k]+dp[k-1])%1000000007;
                    m=max(m,k);
                }
            
            } 
        } 
    } 
  
    for(auto it=v.rbegin();it!=v.rend();it++)
    {
        if(*it<=mx+1)
        {
            dp[*it]=(dp[*it]+dp[*it-1])%1000000007;
            m=max(*it,m);
        }
    }
   mx=max(m,mx);
} 

int main()
{
    ll n,i,t;
    dp[0]=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        printDivisors(t);
       /* for(ll j=0;j<10;j++)
            cout<<dp[j]<<" ";
        cout<<endl;*/
    }
    ll sum=0;
    for(i=1;i<=mx;i++)
        sum=(sum+dp[i])%1000000007;
    cout<<sum<<endl;
    return 0;
}