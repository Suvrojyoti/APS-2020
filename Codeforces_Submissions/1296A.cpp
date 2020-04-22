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
ll test,n,i,j,sum=0;
cin>>test;
while (test--)
{
    sum=0;
    ll odd=0,even=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>sum;
        if(sum%2)
            odd++;
        else
        {
            even++;
        }
        
    }
    if(even==n)
        cout<<"NO\n";
    else if(odd==n && odd%2==0)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
    }
    
}

return 0;
}