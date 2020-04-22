#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll l,r;
map <ll,ll> mp;
cin>>l>>r;
ll i;
for(i=l;i<=r;i++)
{
    ll k=i;
    mp.clear();
    while(k!=0)
    {
        ll temp=k%10;
        mp[temp]++;
        k=k/10;
    }
    ll flag=0;
    for(auto it:mp)
    {
        if(it.second>1)
            flag=1;
    }
    if(flag==0)
    {
        cout<<i;
        exit(0);
    }
}
cout<<"-1";
return 0;
}