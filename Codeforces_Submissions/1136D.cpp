#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,arr[300000],i;
    vector <ll> v;
    unordered_set <ll> st[500005];
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        st[a].insert(b);
    }
    ll t=0;
    for(i=n-2;i>=0;i--)
    {
        if(st[arr[i]].find(arr[n-1])!=st[arr[i]].end())
        {
            ll flag = 0;
            for(auto it:v)
            {
                if(st[arr[i]].find(it)==st[arr[i]].end())
                {
                    flag=1;
                    v.push_back(arr[i]);
                    break;
                }
                    
            }
            if(flag==0)
                t++;
        }
        else
            v.push_back(arr[i]);
        //cout<<t<<" ";
    }
    cout<<t;
    return 0;
}