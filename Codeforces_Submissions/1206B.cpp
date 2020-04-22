#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n,i,j,pos,neg,t=0,sum=0,flag=0;
    cin>>n;
    ll arr[n+5];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            t++;
            sum+=-1-arr[i];
        }
        if(arr[i]>0)
            sum+=arr[i]-1;
        if(arr[i]==0)
        {
            flag=1;
            sum++;
        }


    }
    if(t%2==1)
    {
        if(flag==0)
            sum+=2;

    }
    cout<<sum;
    return 0;
}