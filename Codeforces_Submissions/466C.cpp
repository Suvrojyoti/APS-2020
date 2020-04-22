#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[500005],i,j,pre[500005],l,r,mid,sum,rsum,cnt=0,lsum,pst,k;
    cin>>n;
    cin>>arr[0];
    pre[0]=arr[0];
    for(i=1;i<n;i++)
    {
        cin>>arr[i];
        pre[i]=arr[i]+pre[i-1];
    }
    //cout<<n;
    if(pre[n-1]%3!=0)
    {
        cout<<"0";
        exit(0);
    }
    pst=0;
    k=pre[n-1]/3;

    for(i=0;i<n-1;i++)
    {
        if(pre[i]==2*k)
        {
            cnt+=pst;
            
        }
        if(pre[i]==k)
        {
            pst++;
        }
    }
     cout<<cnt;
    
   
   
    return 0;
}