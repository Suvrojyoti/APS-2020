#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   long long int n,arr[300000],i,t=0,sum=0;
   map <long long int,long long int> odd,even;
   cin>>n;
   arr[0]=0;
   even[arr[0]]++;
   for(i=1;i<=n;i++)
   {
       cin>>t;
       arr[i]=arr[i-1]^t;
       if(i%2==1)
       {
        sum+=odd[arr[i]];
        odd[arr[i]]++;
       }
       else
       {
        sum+=even[arr[i]];
        even[arr[i]]++;
       }
   }
   cout<<sum;
   return 0;
}