#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ll test,n,i;
   cin>>test;
   while(test--)
   {
       cin>>n;
       ll arr[n];
       ll mx=-1,mx1=-1;
       for(i=0;i<n;i++)
       {
            cin>>arr[i];
            
       }
       sort(arr,arr+n);
       mx=arr[n-2]-1;
       ll t=min(mx,n-2);
       if(t<0)
        cout<<"0";
       else
        cout<<t;
       cout<<endl;
       
   }
   return 0;
}