#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n,z,i,arr[200005],t=0;
    cin>>n>>z;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,greater<ll>());
    ll a=0,b=n/2;
    b+=(n%2);
    while(b<n)
    {
      //  cout<<arr[a]<<" "<<arr[b]<<" "<<b<<endl;
        if(arr[a]-arr[b]>=z)
        {
            a++;
            b++;
            t++;
        }
        else
        {
            b++;
        }
        
    }
    cout<<t;
    return 0;
}