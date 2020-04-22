#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n,k,a[200005],i;
    vector<ll> v[200005];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        ll  j=0,k=a[i];
        v[k].push_back(j);
        while(k>0)
        {
            k/=2;
            j++;
            v[k].push_back(j);
        }
    }
    ll mn=99999999999;
    for(i=0;i<200005;i++)
    {
        if(v[i].size()>=k)
        {
            sort(v[i].begin(),v[i].end());
            ll sum=0;
            for(auto it=v[i].begin();it!=v[i].begin()+k;it++)
                sum+=*it;
            mn=min(mn,sum);
        }
        
        
    }
    if (mn == 99999999999)
        cout<<"0";
    else
        cout << mn;
    return 0;
}