#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[6]={0},cnt=0,n,i,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t==4)
            t=0;
        else if (t==8)
            t=1;
        else if (t==15)
            t=2;
        else if(t==16)
            t=3;
        else if (t==23)
            t=4;
        else if (t==42)
            t=5;
        if(t==0)
        {
            arr[t]++;
        }
        else
        {
            if(arr[t-1]<=arr[t])
                cnt++;
            else
                arr[t]++;
        }
    }
    for(i=0;i<6;i++)
        cnt+=arr[i]-arr[5];
    cout<<cnt;
    return 0;
}