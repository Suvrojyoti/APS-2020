#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ll n,arr[300005],i,k;
   cin>>n>>k;
   cin>>arr[0];
   ll sum=0;
   vector <ll> v;
   for(i=1;i<n;i++)
   {
       cin>>arr[i];
       v.push_back(arr[i]-arr[i-1]);
       sum+=arr[i]-arr[i-1];
   }
   sort(v.begin(),v.end(),greater<ll>());
   ll j=0;
   for(i=1;i<k;i++)
   {
    sum-=v[j];
    j++;
   }
   cout<<sum;
   return 0;
}