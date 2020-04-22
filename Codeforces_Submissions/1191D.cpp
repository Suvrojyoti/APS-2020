#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long int n,l,sum,i,arr[100005];
   map<long long int,long long int> m;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
       m[arr[i]]++;
   }
   if(m[0]>1)
   {
    cout<<"cslnb";
    exit(0);
   }
   long long int flag=0;
   for(auto itr=m.begin();itr!=m.end();itr++)
   {
       if(itr->second>2)
        {
            cout<<"cslnb";
            exit(0);
        }
       if(itr->second>1)
        flag++;
   }
   if(flag>1)
   {
    cout<<"cslnb";
    exit(0);
   }
   for(auto itr=m.begin();itr!=m.end();itr++)
   {
       if(itr->second>1&&m[itr->first - 1]>0)
        {
            cout<<"cslnb";
            exit(0);
        }
   }
   sum=0;
   sort(arr,arr+n);
   for(i=0;i<n;i++)
   {
       sum+=arr[i]-i;
   }
   if(sum%2==1)
    cout<<"sjfnb";
   else
    cout<<"cslnb";
    
   return 0;
}