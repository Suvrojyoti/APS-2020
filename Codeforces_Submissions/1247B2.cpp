#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,n,arr[200005],i,j,k,d;
cin>>test;
while (test--)
{
    map <ll,ll> mp;
    ll sz=LLONG_MAX;
    cin>>n>>k>>d;
    for(i=0;i<n;i++)
        cin>>arr[i];
    ll un=0;
    for(i=0;i<d;i++)
    {
        if(mp[arr[i]]==0)
            un++;
        mp[arr[i]]++;
    }
    sz=min(sz,un);
   // cout<<sz<<" ";
    while(i<n)
    {
        mp[arr[i-d]]--;
        if(mp[arr[i-d]]==0)
            un--;
        if(mp[arr[i]]==0)
            un++;
        mp[arr[i]]++;
        sz=min(sz,un);
        i++;
    }
    cout<<sz<<endl;
    
    
}
return 0;
}