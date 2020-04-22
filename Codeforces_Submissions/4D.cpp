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
 
    ll n,w,h,i,j,a,b;
    cin>>n>>w>>h;
    vector <pair<ll,ll>> vec;
    map<pair<ll, ll>, ll> mp;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>w&&b>h)
        {
            vec.pb({a,b});
            mp[{a,b}]=i+1;
        }
    }
    n=vec.size();
    if(n==0)
    {
        cout<<"0";
        exit(0);
    }
    sort(vec.begin(),vec.end());
    vector <ll> dp(n+5,0),p(n+5,-1);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
             if (vec[i].second > vec[j].second&&vec[i].first>vec[j].first)
            {
                if(dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                    p[i]=j;
                }
            }
        }
    }
    auto it=max_element(dp.begin(),dp.begin()+n)-dp.begin();
    vector <ll> subseq;
    while(it!=-1)
    {
        subseq.pb(mp[vec[it]]);
        it=p[it];
    }
 
    // for(i=0;i<n;i++)
    //     cout<<dp[i]<<" ";
    // cout<<endl;
    
    reverse(subseq.begin(),subseq.end());
    cout<<subseq.size()<<endl;
    for(auto it:subseq)
        cout<<it<<" ";
    return 0;
 
}