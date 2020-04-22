#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
// #define
using namespace std;

const ll INF = 1e18L + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n,i,j,t,arr[200005];
    set <ll> spc,fil;
    cin>>n;
    for(i=1;i<=n;i++)
        fil.insert(i);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i])
        fil.erase(arr[i]);
        else
        {
            spc.insert(i+1);
        }
        
    }
    vector <pair<ll,ll>> v,v1;
    for(auto it=spc.begin(),itr=fil.begin();it!=spc.end();it++,itr++)
    {
        v.pb({*it,*itr});
    }
    // for(auto it:v)
    // {
    //     cout<<it.fi<<" "<<it.se<<endl;
    // }
   for(auto it=v.begin();it+1<v.end();it+=2)
   {
       if(it->fi==it->se||(it+1)->fi==(it+1)->se)
       {
           swap(it->fi,(it+1)->fi);
       }
   }
   auto it=v.end()-1;
   auto itr=v.begin();
   if(it->fi==it->se)
   {
       swap(it->fi,itr->fi);
   }
   for(auto it:v)
   {
       arr[it.fi-1]=it.se;
   }
   for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}