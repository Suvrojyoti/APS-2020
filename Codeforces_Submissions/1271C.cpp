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
    ll n,sx,sy,i,a,b,j,mx1=0,mx=0,st=0,st1=0;
    cin>>n>>sx>>sy;
    vector <pair<ll,ll>> v;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.pb({a,b});
    }
    a=sx+1,b=sy;
    for(auto it:v)
    {
        if(a>=min(sx,it.first)&&a<=max(sx,it.first)&&b>=min(sy,it.second)&&b<=max(sy,it.second))
            mx++;
    }
    if(mx>mx1)
    {
        mx1=mx;
        st=a;
        st1=b;
    }
    a=sx-1,b=sy,mx=0;
    for (auto it : v)
    {
        if (a >= min(sx, it.first) && a <= max(sx, it.first) && b >= min(sy, it.second) && b <= max(sy, it.second))
            mx++;
    }
    if (mx > mx1)
    {
        mx1 = mx;
        st = a;
        st1 = b;
    }
    a=sx,b=sy+1,mx=0;
    for (auto it : v)
    {
        if (a >= min(sx, it.first) && a <= max(sx, it.first) && b >= min(sy, it.second) && b <= max(sy, it.second))
            mx++;
    }
    if (mx > mx1)
    {
        mx1 = mx;
        st = a;
        st1 = b;
    }
    a=sx,b=sy-1,mx=0;
    for (auto it : v)
    {
        if (a >= min(sx, it.first) && a <= max(sx, it.first) && b >= min(sy, it.second) && b <= max(sy, it.second))
            mx++;
    }
    if (mx > mx1)
    {
        mx1 = mx;
        st = a;
        st1 = b;
    }
    cout<<mx1<<endl<<st<<" "<<st1<<endl;
    return 0;
}