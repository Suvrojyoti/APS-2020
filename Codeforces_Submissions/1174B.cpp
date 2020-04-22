#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define mod 1000000007
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool o=0,e=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
            o=1;
        else
            e=1;
    }
    if(o==0 || e==0)
    {
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
    else if(o==1 && e==1)
    {
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
    return 0;
}