#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll n,k,t,cnt=0,i;
   cin>>n>>k;
   ll arr[k+1]={0};
   
   for( i=0;i<n;i++)
   {
        cin>>t;
        arr[t]++;
   }
   for(i=1;i<=k;i++)
   {
       if(arr[i]%2==1)
        cnt++;
   }
   if(cnt==0)
   {
        cout<<n;
   }
   else
    cout<<n-cnt+(cnt/2)+(cnt%2);
    return 0;
}