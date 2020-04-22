#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
// #define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;
ll arr[100005],n;
ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}
ll check(ll k)
{
    ll i,j,sum=0;
    ll a,b;
    for(i=0;i<n-1;i++)
    {
        a=arr[i],b=arr[i+1];
        if(arr[i]==-1)
            a=k;
        if(arr[i+1]==-1)
            b=k;
        sum=max(sum,abs(a-b));
    }
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,i,j;
cin>>test;
while(test--)
{
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>arr[i];
    ll lo=0,hi=1e9+5;
    ll mid;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        
        ll l=check(mid-1),m=check(mid),h=check(mid+1);
        // cout << lo << " " <<l<<" | "<< mid <<" "<<m<< " | " << hi <<" "<<h<< endl;
        // if(m<=l and m<=h)
        //     break;     
        if(m<=l and m<=h)   
            break;
        if (l>m and m>h)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    cout << check(mid) <<" "<< mid  << endl;
}
return 0;
}