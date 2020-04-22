#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll n,i,a,b,ans;
cin>>n;
ll arr[n+5];
for(i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n,greater<ll>());
ll in=0;
a=accumulate(arr,arr+(n+1)/2,in);
b = accumulate( arr + (n + 1) / 2, arr+n,in);
ans=a*a+b*b;
cout<<ans;
return 0;
}