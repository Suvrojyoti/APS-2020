#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   ll n,i,j,k=0;
   cin>>n;
   ll arr[n+2][n+2];
   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        cin>>arr[i][j];
       
    }
   k=arr[0][1]*arr[0][2];
   k=sqrt(k/arr[1][2]);
   cout<<k<<" ";
   for(i=1;i<n;i++)
    cout<<arr[0][i]/k<<" ";
  return 0;
   //cout<<k;
}