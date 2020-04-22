#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll curr[200005],mx[200005],arr[200005],n,inf=-9999999999,m=-9999999999;
vector <ll> v[200005];

ll dfs(ll a,ll p)
{
    curr[a]=arr[a];
    for(auto it:v[a])
    {
        if(it!=p)
        {
            curr[a]+=dfs(it,a);
            mx[a]=max(mx[a],mx[it]);
        }
    }
    mx[a]=max(mx[a],curr[a]);
    return curr[a];
}

void ds(ll a,ll p)
{
    vector <ll> vec;
    for(auto it:v[a])
    {
        if(it!=p)
        {
            ds(it,a);
            
        }
    }
   // cout<<v[a].size()<<" ";
    if(v[a].size()>2)
    {
        for(auto it:v[a])
        {
            if(it!=p)
            {
                vec.push_back(mx[it]);
            }
        }
        sort(vec.begin(),vec.end(),greater <ll>());
        m=max(m,vec[0]+vec[1]);
    }
}
 
int main() 
{
    
   ll i,a,b,sum;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>arr[i];
       mx[i]=inf;
   }
   for(i=1;i<n;i++)
   {
       cin>>a>>b;
       v[a].push_back(b);
       v[b].push_back(a);
   }
   v[1].push_back(0);
   dfs(1,0);
 /*  for(i=0;i<=n;i++)
   {
       cout<<i<<" "<<mx[i]<<" "<<curr[i]<<endl;
   }*/
   ds(1,0);
  // for(auto it:v[1])
    //cout<<it<<" ";
   if(m==inf)
    cout<<"Impossible";
   else
    cout<<m;
   return 0;
}