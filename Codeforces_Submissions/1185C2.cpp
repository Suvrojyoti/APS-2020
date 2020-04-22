#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,arr[200000],cnt[110]={0},i,sum=0,c,need,sm,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(sum+arr[i]<=m)
            cout<<"0";
        else
        {
            need=m-arr[i];
            sm=sum-need;
            j=100;
            int k=0;
            j=100;
            while(sm>0)
            {
               // k++;
                if(cnt[j])
                {
                    if(cnt[j]>=ceil(float((sm*1.0)/(j*1.0))))
                    {
                        c+=ceil(float((sm*1.0)/(j*1.0)));
                       // cout<<cnt[j]<<"*"<<sm<<"*"<<j<<" ";
                        sm=0;
                    }
                    else
                    {
                        c+=cnt[j];
                        sm=sm-cnt[j]*j;
                    }
                }
                j--;
            }
            cout<<c;
        }
        cnt[arr[i]]++;
        sum+=arr[i];
        cout<<" ";
    }
    return 0;
}