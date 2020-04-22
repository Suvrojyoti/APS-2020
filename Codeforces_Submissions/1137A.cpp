#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
   long long int j,n,m,arr[1005][1005],i,r1[1005],c1[1005];
   vector <long long int> r[1005],c[1005];
   cin>>n>>m;
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           cin>>arr[i][j];
           r[i].push_back(arr[i][j]);
           c[j].push_back(arr[i][j]);
       }
      
       sort(r[i].begin(),r[i].end());
       auto it = unique(r[i].begin(),r[i].end());
       r1[i]=it-r[i].begin();
   }
   for(i=0;i<m;i++)
   {
       sort(c[i].begin(),c[i].end());
       auto it =unique(c[i].begin(),c[i].end());
       c1[i]=it-c[i].begin();
   }
 /*  for(i=0;i<n;i++)
   {
       for(auto it:r[i])
        cout<<it<<" ";
       cout<<endl;
   }
   cout<<endl;
   for(i=0;i<m;i++)
   {
       for(auto it:c[i])
        cout<<it<<" ";
       cout<<endl;
   }
   cout<<endl;*/
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           cout<<max(lower_bound(r[i].begin(),r[i].begin()+r1[i],arr[i][j])-r[i].begin(),lower_bound(c[j].begin(),c[j].begin()+c1[j],arr[i][j])-c[j].begin())+
           max(r[i].begin()+r1[i]-upper_bound(r[i].begin(),r[i].begin()+r1[i],arr[i][j]),c[j].begin()+c1[j]-upper_bound(c[j].begin(),c[j].begin()+c1[j],arr[i][j]))+1<<" ";
       }
      cout<<endl;
   }
   return 0;
}