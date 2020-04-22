#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll n,arr[200005],i,j;
   cin>>n;
   multiset <ll> s;
   for(i=0;i<n;i++)
    cin>>arr[i];
   for(i=0;i<n;i++)
   {
       ll t;
       cin>>t;
       s.insert(t);
   }
   for(i=0;i<n;i++)
   {
      /* for(auto tt:s)
        cout<<tt<<" ";
       cout<<endl;*/
       ll k=(arr[i]+*s.begin())%n;
       auto it=s.lower_bound(n-arr[i]);
       if(it==s.end()||(*it+arr[i])%n>k)
       {
           cout<<k<<" ";
           auto itr=s.begin();
           s.erase(itr);
       }
       else
       {
           cout<<(*it+arr[i])%n<<" ";
            s.erase(it);
       }
   }
   return 0;
}