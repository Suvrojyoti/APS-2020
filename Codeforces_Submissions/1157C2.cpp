#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll n,arr[200005],i,j;
   cin>>n;
   for(i=0;i<n;i++)
    cin>>arr[i];
   vector <char> v;
   i=0;
   j=n-1;
   ll t=0;
   bool flag=0;
   while(j>=i)
   {
       if(arr[i]>t&&arr[j]>t)
       {
           if(arr[j]<arr[i])
           {
            v.push_back('R');
            t=arr[j];
            j--;
           }
           else if(arr[i]<arr[j])
           {
               v.push_back('L');
               t=arr[i];
               i++;
           }
           else
           {
               flag=1;
               break;
           }
       }
       else if(arr[i]>t)
       {
           t=arr[i];
           v.push_back('L');
           i++;
       }
       else if(arr[j]>t)
       {
           t=arr[j];
           v.push_back('R');
           j--;
       }
       else
        break;
   }
   ll k=0,k1=0;
   if(flag==1)
   {
       while(i<n-1&&arr[i+1]>arr[i])
       {
           i++;
           k++;
       }
       while(j>0&&arr[j-1]>arr[j])
       {
           j--;
           k1++;
       }
       if(k>k1)
       {
           while(k>-1)
           {
               v.push_back('L');
               k--;
           }
       }
       else
       {
           while(k1>-1)
           {
               v.push_back('R');
               k1--;
           }
       }
       
   }
   cout<<v.size()<<endl;
   for(auto it:v)
    cout<<it;
    return 0;
}