#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,j,k,sum,arr[5005],t;
    double avg,max=0.00;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<=n-k;i++)
    {
        sum=0;
        for(j=i;j<i+k;j++)
            sum+=arr[j];
        //cout<<sum<<" ";
        avg=sum*1.0/k;
        if(avg>max)
        {
            max=avg;
        }
        t=k;
        for(j=i+k;j<n;j++)
        {
            //cout<<avg<<" ";
            sum+=arr[j];
            t++;
            avg=sum*1.0/t;
            if(avg>max)
                max=avg;
        }
    }
    cout<<setprecision(19)<<max;
    return 0;
}