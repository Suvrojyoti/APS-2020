#include<bits/stdc++.h> 
using namespace std;
int main()
{
   long long int n,i,sum,f1,l1;
   char arr[200005],f,l;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   i=0;
   while(i<n-1&&arr[i]==arr[i+1])
    i++;
   f=arr[0];
   l=arr[n-1];
   if(i==n-1)
   {
       for(i=1;i<=n;i++)
        sum=(sum%998244353 + i%998244353 )%998244353 ;
        cout<<sum;
       /*sum=n*(n+1)/2;
       cout<<sum%998244353 ;*/
   }
   else 
   {
       i=0;
       while(arr[i]==arr[i+1])
        i++;
       f1=i+1;
       i=n-1;
       while(arr[i]==arr[i-1])
       i--;
       l1=n-i;
       if(f==l)
       {
           l1++;
           f1++;
           cout<<(f1%998244353 *l1%998244353 )%998244353 ;
       }
       else
       {
           cout<<(f1%998244353 +l1%998244353 +1%998244353 )%998244353 ;
       }
       
   }
   return 0;
}