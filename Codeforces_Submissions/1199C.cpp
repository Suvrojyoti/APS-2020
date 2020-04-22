#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll n,i,j;
  unsigned ll k;
  cin>>n>>k;
  ll arr[n+5],a[n+5];
  map <ll,ll> m;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
    m[arr[i]]++;
  }
  k=8*k;
  k=k/n;
  if(k>=30)
  {
      cout<<"0";
      exit(0);
  }
  k=pow(2,k);
  if(m.size()<=k)
  {
      cout<<"0";
      exit(0);
  }
  ll mx=0,n1=0;
  i=0;
  ll sum=0;
  for(auto it=m.begin();it!=m.end();it++)
  {
      a[i]=it->second;
      i++;
  }
  n1=i;
  for(i=0;i<k&&i<n1;i++)
    sum+=a[i];
  mx=sum;
  sum-=a[0];
  for(i=k;i<n1;i++)
  {
    sum+=a[i];
    mx=max(mx,sum);
    sum-=a[i-k+1];
  }
  cout<<n-mx;
  return 0;
}