#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ll n,i,flag;
   cin>>n;
   ll arr[n+5];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   ll idx=max_element(arr,arr+n)-arr;
   for(i=0;i<idx;i++)
   {
       if(arr[i+1]<=arr[i])
       {
        cout<<"NO";
        exit(0);
       }
   }
   for(i=idx;i<n-1;i++)
   {
       if(arr[i+1]>=arr[i])
       {
           cout<<"NO";
           exit(0);
       }
   }
   cout<<"YES";
   return 0;
}