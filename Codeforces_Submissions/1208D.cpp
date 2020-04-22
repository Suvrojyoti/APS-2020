#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;
ll n,arr[200005],bit[200005],logn;
void update(ll x, ll delta)
{
    for(;x<=n;x+=x&(-x))
        bit[x]+=delta;
}

ll bit_search(ll v)
{
    ll sum=0;
    ll pos=0;
    for(ll i=logn;i>=0;i--)
    {
        if(pos+(1<<i)<=n && sum+bit[pos+(1<<i)]<=v )
        {
            sum+=bit[pos+(1<<i)];
            pos+=(1<<i);
        }
    }
    return pos+1;
}

int main()
{
    ll test,i;   
    cin>>n;
    logn=25;
   // cout<<logn<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        update(i,i);
    }
    vector <ll> v1;
    for(i=n;i>0;i--)
    {
        ll t=bit_search(arr[i]);
      //  cout<<t<<endl;
        v1.push_back(t);
        update(t,t*(-1));
    }
   // cout<<v1.size();
    reverse(v1.begin(),v1.end());
    for(auto it:v1)
        cout<<it<<" ";
}