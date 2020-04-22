#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,i,j,n;
cin>>test;
while (test--)
{
    cin>>n;
    ll sum=0;
    ll temp=n;
    ll mx=1e9;
    while(mx!=1)
    {
        while(temp/mx!=0)
        {
            ll temp1=(temp/mx)*mx/10;
            sum+=temp1;
            temp=temp1+temp%mx;
        }
        mx=mx/10;
    }
    sum=sum*10+temp;
    cout<<sum<<endl;
}
return 0;
}