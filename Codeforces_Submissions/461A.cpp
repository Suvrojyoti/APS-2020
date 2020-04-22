#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[300000],sum=0,sm=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    sort(arr,arr+n);
    sum=arr[n-1]*n;
    for(i=0;i<n-1;i++)
        sum+=arr[i]*(i+2);
    cout<<sum;
    return 0;
}