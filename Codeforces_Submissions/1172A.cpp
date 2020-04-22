#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,arr[200005],i,j,t,a[200005];
    cin>>n;
    bool f=0;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(i==1&&t==1)
            f=1;
        arr[t]=0;
    }
    ll flag=0;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        arr[t]=i;
        a[i]=t;
        if(t!=0)
            flag=1;
    }
    if(flag==0)
    {
        cout<<n;
        exit(0);
    }
    ll k=arr[1];
   // cout<<arr[1]<<" ";
    for(i=2;i<=n;i++)
    {
        if(arr[i]>k+i-1)
        break;
    }
    
     for(j=arr[1];j<=n;j++)
        if(a[j]==0||a[j]!=a[j-1]+1)
            break;
    //cout<<i<<" "<<j;
    if(i==n+1&&j==n+1)
    {
        ll kk=0;
        ll r=a[n];
        for(i=r+1;i<=n;i++)
        {
            if(arr[i]>kk)
                break;
            kk++;
        }
        if(i==n+1)
        {
        cout<<k-1;
        exit(0);
        }
    }
    t=0;
    ll sum=0;
    f=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]>t)
        {
            sum+=(arr[i]-t);
            t=arr[i];
            f=1;
        }
        else
        {
            t++;
            sum++;
        }
        
            
    }
    //cout<<sum;
    if(f==0)
        cout<<sum;
    else
    cout<<sum+1;
    return 0;
}