#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test,n,i;
    cin>>n;
    ll arr[n+2];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll m=*max_element(arr,arr+n);
    ll g=__gcd(m-arr[0],m-arr[1]);
    for(i=2;i<n;i++)
    {
        ll t=m-arr[i];
        if(t!=0)
        {
            g=__gcd(g,m-arr[i]);
        }
    }
    ll sum=0,cnt=0;
    for(i=0;i<n;i++)
    {
        sum+=(m-arr[i])/g;
        
    }
    cout<<sum<<" "<<g;
    return 0;
}