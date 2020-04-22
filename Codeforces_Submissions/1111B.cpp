#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   long long int n,m,k,arr[100005],i;
   double t,t2,sum=0,res=0;
   cin>>n>>k>>m;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
   }
   sort(arr,arr+n);
   res=0;
   i=0;
   //cout<<sum;
   while(n>0&&m>0)
   {
       t=double(min(n*k,m));
      // cout<<sum<<" ";
       res=max(res*1.0,(sum*1.0+t*1.0)/(n*1.0));
     //  cout<<res<<endl;
       sum-=arr[i];
       i++;
       n--;
       m--;
   }
   if(m<n)
    cout<<setprecision(12)<<max(res,(sum*1.0)/(n*1.0));
   else
    cout<<setprecision(12)<<res;
   return 0;
}