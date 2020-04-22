#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m,arr[28],sum,mx,i;
   char t;
   vector <long long int> v[28];
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>t;
       v[t-'a'].push_back(i+1);
   }
/*   for(i=0;i<26;i++)
   {
       cout<<char(i+'a');
       for(auto it:v[i])
        cout<<it<<" ";
    cout<<endl;
   }*/
   cin>>m;
   while(m--)
   {
       memset(arr,0,28*sizeof(arr[0]));
       string s;
       mx=-1;
       cin>>s;
       for(i=0;i<s.size();i++)
       {
           arr[s[i]-'a']++;
       }
      // cout<<endl;
     /*  for(i=0;i<26;i++)
       cout<<arr[i];
    cout<<endl;*/
       for(i=0;i<26;i++)
       {
           if(arr[i]!=0)
           mx=max(mx,v[i][arr[i]-1]);
       }
       cout<<mx<<endl;
   }
   return 0;
}