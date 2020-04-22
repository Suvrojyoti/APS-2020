#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll n,arr[150000],i,j;
   set <ll> s;
   cin>>n;
   for(i=0;i<n;i++)
   {
        cin>>arr[i];
        arr[i]++;
   }
   sort(arr,arr+n,greater<ll>());
  // for(i=0;i<n;i++)
    //cout<<arr[i]<<" ";
   for(i=0;i<n;i++)
   {
       if(s.find(arr[i])==s.end())
        s.insert(arr[i]);
       else if(s.find(arr[i]-1)==s.end())
        s.insert(arr[i]-1);
       else if(s.find(arr[i]-2)==s.end())
        s.insert(arr[i]-2);
   }
   if(s.find(0)==s.end())
    cout<<s.size();
   else
    cout<<s.size()-1;
    return 0;
}