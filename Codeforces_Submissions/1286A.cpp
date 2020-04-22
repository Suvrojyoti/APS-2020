#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;
 
ll ceel(ll a, ll b){ if(a % b == 0) return a / b; return a / b + 1;}
ll n,arr[1000],todd,teven;
ll dp[105][105][3];
ll calc(ll till,ll last,ll odd,ll even)
{
    
    if(dp[till][odd][last]!=0)
        return dp[till][odd][last];
    if (till == n)
        return 0;
    if(till==0)
    {
        if(arr[till]==-1)
        {
            if(odd==todd)
                dp[till+1][odd+1][1]=inf;
            if(even==teven)
                dp[till+1][odd][0]=inf;
            // dp[till][odd][last]=min(dp[till+1][odd+1][1],dp[till+1][odd][0]);
            dp[till][odd][last]=min(calc(till+1,1,odd+1,even),calc(till+1,0,odd,even+1));
        }
        else
        {
            // dp[till][odd][last]=dp[till+1][odd][arr[till]];
            dp[till][odd][last] = calc(till+1,arr[till],odd,even);
        }
    }
    else
    {
        if(arr[till]==-1)
        {
            if (odd == todd)
                dp[till + 1][odd + 1][1] = inf;
            if (even == teven)
                dp[till + 1][odd][0] = inf;
            ll a=0,b=0;
            a=calc(till+1,1,odd+1,even);
            if(last!=1)
                a++;
            b=calc(till+1,0,odd,even+1);
            if(last!=0)
                b++;
            // if(till==19)
            //     cout<<a<<" "<<b<<endl;
            dp[till][odd][last]=min(a,b);           
        }
        else
        {
            dp[till][odd][last]=calc(till+1,arr[till],odd,even);
            if(arr[till]!=last)
                dp[till][odd][last]++;
        }
        
    }
    // cout << till << " " << odd << " " << last << " " <<dp[till][odd][last]<<endl;
    return dp[till][odd][last];
    
}
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll i,j;
cin>>n;
rep(i,0,n)
{
    if((i+1)%2)
        todd++;
    else
        teven++;
    cin>>arr[i];
    if(arr[i]!=0)
    {
        arr[i]=arr[i]%2;
        if(arr[i])
            todd--;
        else
            teven--;
    }
    else
    {
        arr[i]=-1;
    }
        
}
// cout<<teven<<" "<<todd<<" ";
cout << calc(0, 0, 0, 0);
return 0;
}