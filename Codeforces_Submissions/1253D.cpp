#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;
ll dsu[200005], mn[200005], mx[200005], n, m, rnk[200005];
ll par(ll a)
{
    while(a!=dsu[a])
    {
        dsu[a]=dsu[dsu[a]];
        a=dsu[a];
    }
    return a;
}
void uni(ll a,ll b)
{
    a=par(a);
    b=par(b);
    if(a==b)
        return;
    if(rnk[a]>rnk[b])
    {
        dsu[b]=a;
        rnk[a]+=rnk[b];
        mx[a]=max(mx[a],mx[b]);
        mn[a]=min(mn[a],mn[b]);
    }
    else
    {
        dsu[a]=b;
        rnk[b]+=rnk[a];
        mx[b]=max(mx[b],mx[a]);
        mn[b]=min(mn[b],mn[a]);
    }
    
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll a,b,i,j;
    cin>>n>>m;
    for(i=0;i<=n+3;i++)
    {
        dsu[i]=i;
        rnk[i]=1;
        mx[i]=i;
        mn[i]=i;
    }
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        uni(a,b);
    }
    ll k=1,cnt=0;
    while(k<=n)
    {
        for(i=k;i<=mx[par(k)];i++)
        {
            if(par(k)!=par(i))
            {
                uni(i,k);
                cnt++;
            }
        }
        k=i;
    }
    cout<<cnt;
    return 0;
}