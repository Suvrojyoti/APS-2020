#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,arr[10000],max=0,t,i,n1;
    cin>>n;
    n1=n;
    for(i=0;i<10000;i++)
        arr[i]=0;
    while(n--)
    {
        cin>>t;
        arr[t]++;
    }
    for(i=0;i<=200;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<max;
    return 0;
}