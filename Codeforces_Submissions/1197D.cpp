#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll ceel(ll a,ll b)
{
    if(a%b==0)
        return a/b;
    return (a/b)+1;
}

int main()
{
   ll n,m,k,arr[300005],i,sum,len,a[300005],dp;
   cin>>n>>m>>k;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
       ll p=1;
       a[i]=arr[i]-k*ceel(p,m);
      // cout<<a[i]<<" ";
   }
  // cout<<endl;
   sum=arr[0];
   len=1;
   for(i=1;i<n;i++)
   {
       sum+=arr[i];
       len++;
       dp=sum-k*ceel(len,m);
      // cout<<arr[i]<<" sum= "<<sum<<" len= "<<len<<" dp= "<<dp<<"\n";
       if(dp<a[i])
       {
           sum=arr[i];
           len=1;
       }
       /*else
       {
           sum+=arr[i];
           len++;
       }*/
       
   }
   ll t=max(dp,*max_element(a,a+n));
   if(t<0)
    cout<<"0";
   else
    cout<<t;
   return 0;
}