#include<bits/stdc++.h>  
using namespace std;  
#define ll long long  
const int maxn=1e6+5;  
const ll mod=1e9+7;  
ll p[maxn],bit[maxn],tol;  
struct node1  
{  
    ll l,r;  
}c[maxn];  
bool cmp(node1 a,node1 b)  
{  
    if(a.r!=b.r)return a.r<b.r;  
    return a.l<b.l;  
}  
ll sum(ll i)  
{  
    ll s=0;  
    while(i>0)  
    {  
        s=(s+bit[i])%mod;  
        i-=i&-i;  
    }  
    return s%mod;  
}  
void add(ll i,ll x)  
{  
    while(i<=tol)  
    {  
        bit[i]=(bit[i]+x)%mod;  
        i+=i&-i;  
    }  
}  
int main()  
{  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n,m;
    cin>>n>>m;
    tol=1;  
    for(int i=0;i<m;i++)  
    {  
        cin>>c[i].l>>c[i].r;
        p[tol++]=c[i].l;  
        p[tol++]=c[i].r;  
    }  
    sort(p+1,p+tol+1);  
    sort(c,c+m,cmp);  
    ll s=0;  
    for(int i=0;i<m;i++)  
    {  
        int l=lower_bound(p+1,p+tol+1,c[i].l)-p;  
        int r=lower_bound(p+1,p+tol+1,c[i].r)-p;  
        ll ans=0;  
        if(c[i].l==0)ans++;  
        ans+=sum(r-1)-sum(l-1);  
        ans=(ans+mod)%mod;  
        add(r,ans);  
        if(c[i].r==n)s=sum(r)-sum(r-1);  
    }  
    cout<<(s+mod)%mod;  
    return 0;  
}