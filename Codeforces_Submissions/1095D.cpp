#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int n,arr[200005][2],a[200005],i,t,x=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        x=x^i;
    }
    a[1]=1;
    x=x^1;
    for(i=2;i<n;i++)
    {
        if(arr[a[i-1]][0]==arr[arr[a[i-1]][1]][0]||arr[a[i-1]][0]==arr[arr[a[i-1]][1]][1])
        {
            
            a[i]=arr[a[i-1]][1];
           // cout<<a[i]<<endl;;
        }
        else
        {
            a[i]=arr[a[i-1]][0];
        }
        x=x^a[i];
    }
    a[n]=x;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}