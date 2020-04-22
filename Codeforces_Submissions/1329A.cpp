#include <bits/stdc++.h>
#define ll unsigned long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 1e5+5;
 
ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}
ll lcm(ll a,ll b){    return (a*b)/__gcd(a,b);};
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,n,i,j,k,m;
cin>>n>>m;
ll sm=0;
ll temp,arr[m+5];
rep(i,0,m)
{
    cin>>arr[i];
    sm+=arr[i];
}
if(sm<n)
{
    cout<<"-1\n";
    exit(0);
}
ll ans[m+5];
bool flag = 0;
ll lsum=sm;
i=0,j=0,temp=0;
ll arr1[n+5];
memset(arr1,0,sizeof(arr1));
while(i<n)
{
    // cout<<i<<" "<<j<<" "<<lsum<<" ";
    if(arr[j]>n-i)
    {
        cout << "-1";
        exit(0);
    }
    if(lsum>=n-i)
    {
        ans[j]=i;
        // cout<<ans[j]<<" ";
        lsum-=arr[j];
        arr1[i]++;
        // ll lim=min(n+1,i+arr[j]);
        arr1[i+arr[j]]+=-1;
        j++;
        if(j==m)  
        {
            if (arr[j - 1] != n - i)
                flag = 1;
            break;
        }
        // cout<<i<<"|"<<j<<"|"<<arr[j]<<" ";
        // for(k=0;k<m;k++)
        //     cout<<ans[k]<<" ";
        // cout<<endl;
    }
    // cout<<endl;
    i++;
    
}
// cout<<endl;
if(j!=m)
{
    cout<<"-1";
    exit(0);
}
if(flag)
{
    cout<<"-1";
}
else
{
    temp=0;
    for(i=0;i<n;i++)
    {
        temp+=arr1[i];
        if(temp<=0)
        {
            cout<<"-1";
            exit(0);
        }
    }
    for(i=0;i<m;i++)
        cout<<ans[i]+1<<" ";
    // for(auto it:ans)
    //     cout<<it+1<<" ";
}
return 0;
}