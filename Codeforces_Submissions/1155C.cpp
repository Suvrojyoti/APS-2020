#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,i,arr[300000],sum,p[300000],m,g;
  vector<long long int> v;
  cin>>n>>m;
  for(i=0;i<n;i++)
    cin>>arr[i];
  for(i=0;i<m;i++)
    cin>>p[i];
  sort(arr,arr+n);
  for(i=1;i<n;i++)
  {
      if(arr[i]!=arr[i-1])
        v.push_back(arr[i]-arr[i-1]);
  }
  if(v.size()==0)
  {
    cout<<"YES"<<endl<<arr[0]<<" "<<p[0];
    exit(0);
  }
g=*v.begin() ;
for(auto itr=v.begin()+1;itr!=v.end();itr++)
 {
     g=__gcd(g,*itr);
 }
 for(i=0;i<m;i++)
 {
     if(g%p[i]==0)
     {
        cout<<"YES"<<endl<<arr[0]<<" "<<i+1;
        exit(0);
     }
 }
 cout<<"NO";
 return 0;
}