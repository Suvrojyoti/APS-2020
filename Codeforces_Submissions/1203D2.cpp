#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,n1,i,j;
    string a,b;
    cin>>a>>b;
    //cout<<a<<b<<endl;
    ll arr[b.size()+1][2]={0};
    ll k=0;
    for(i=0;i<b.size();i++)
    {
        for(j=k;j<a.size();j++)
        {
            if(a[j]==b[i])
            {
                arr[i][0]=j;
               // cout<<j<<" ";
                break;
            }
        }
        k=j+1;
    }
    k=a.size()-1;
    for(i=b.size()-1;i>=0;i--)
    {
        for(j=k;j>=0;j--)
        {
            if(a[j]==b[i])
            {
                arr[i][1]=j;
                break;
            }
        }
        if(j<=-1)
            arr[i][1]=-1;
        k=j-1;
    }
  //  for(i=0;i<b.size();i++)
    //    cout<<arr[i][1]<<" ";
    n=a.size();
    ll mx=max(arr[0][1],n-1-arr[b.size()-1][0]);
   // cout<<mx<<" ";
    for(i=0;i<b.size()-1;i++)
    {
        mx=max(arr[i+1][1]-arr[i][0]-1,mx);
    }
    cout<<mx;
}