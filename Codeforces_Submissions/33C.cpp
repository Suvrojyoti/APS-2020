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

   ll n,mx,i,j;
   cin>>n;
   vector <ll> v(n+5);
   for(i=0;i<n;i++)
    cin>>v[i];
  j=mx=0;
  for(i=0;i<n;i++)
  {
      j+=v[i];
      if(j<0)
        j=0;
     mx=max({mx,j});
  }
  //cout<<j<<endl;
  cout<<2*mx-accumulate(v.begin(),v.begin()+n,0);
  return 0;
}