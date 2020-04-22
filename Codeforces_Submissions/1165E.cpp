#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll i,n,sum,j;
    cin>>n;
    ll a[n+5],b[n+5];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
        a[i]=(n-i)*(i+1)*a[i];
    sort(a,a+n,greater<ll>());
    sort(b,b+n);
    sum=0;
    for(i=0;i<n;i++)
    {
       // ll t=(b[i]%998244353*a[i]%998244353)%998244353;
        sum=(sum+(a[i]%998244353)*b[i])%998244353;
    }
    cout<<sum;
    return 0;
}