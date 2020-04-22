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
    ll a,b,c,d,e,f,sum=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(e>f)
    {
        sum+=e*min(a,d);
        d-=min(a,d);
        sum+=f*min(min(b,c),d);
    }
    else
    {
        sum+=f*min(min(b,c),d);
        d-=min(b,min(c,d));
        sum+=e*min(a,d);
    }
    cout<<sum;
    return 0;
}