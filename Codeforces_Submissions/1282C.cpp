#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
// #define
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn=205;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   ll test,n,t,a,b,arr[200005],i,j,tme[200005];
   cin>>test;
   while (test--)
   {
       cin>>n>>t>>a>>b;
       vector<pair<ll, ll>> v;
       ll a1=0,b1=0;
       for(i=0;i<n;i++) 
       {
           
           cin>>arr[i];
           if(arr[i]==0) a1++;
           else b1++;
       }
       for(i=0;i<n;i++)
       {
           cin >> tme[i];
           v.pb({tme[i],arr[i]});
       } 
       v.pb({t+1,0});
       sort(v.begin(),v.end());
       ll tk=0,left=0,mx=0,al=0,dil=0,c1=0,c2=0;
    
       for(i=0;i<=n;i++)
       {
           ll need=c1*a+c2*b;
           ll has=v[i].fi-1-need;
           if(has>=0)
           {
           ll canA=min(a1-c1,has/a);
           has-=a*canA;
           ll canB=min(b1-c2,has/b);
           mx=max(mx,canB+canA+c1+c2);
           
           }
           ll l=i;
           while (l < v.size() && v[l].first == v[i].first) 
            {
           if(v[l].se==0)
            {
                c1++;
            }
           else
           {
               c2++;
           }
           l++;
            }
           i=l-1;
        //   cout<<mx<<" "<<left<<endl;
       }
       cout<<mx<<endl;
       
   }
   return 0;
}