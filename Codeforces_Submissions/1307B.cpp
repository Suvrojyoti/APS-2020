#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
// #define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,n,m,i,j,d;
cin>>test;
while(test--)
{
    ll mx=-1;
    bool flag=0;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>j;
        mx=max(mx,j);
        if(d==j)
        {
            flag=1;
        }

    }
    if(flag)
    {
        cout<<"1\n";
        continue;
    }
    ll pp=2;
    cout<<max(pp,ceel(d,mx))<<endl;
}
return 0;
}