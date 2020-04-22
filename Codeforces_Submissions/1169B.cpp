#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353
ll power(ll a,ll b, ll m=MOD)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return res;
}
ll inverse(ll a,ll m=MOD)
{
    return power(a,m-2,m);
}
#define INFl 1e18
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<long long>
#define ii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<ii>
#define F first
#define S second
#define forl(i,n) for(int i=0;i<n;i++)
#define fore(i,n) for(int i=1;i<=n;i++)
#define INF 1000000009
#define gcd(a,b) __gcd(a,b)
#define all(x)  x.begin(),x.end()
#define mp make_pair
#define pb push_back
#define print(x)    for(auto it=x.begin();it!=x.end();it++) cout<<*it<<' '; cout<<endl;
#define printii(x)  for(auto it=x.begin();it!=x.end();it++) cout<<it->F<<' '<<it->S<<'\t';  cout<<endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int n,m;
vii a;
vvi b;
bool yes=false;
void check(int x)
{
    // cout<<x<<endl;
    ii temp;
    forl(i,m)
    {
        if(a[i].F!=x && a[i].S!=x)
        {
            temp=a[i];
            break;
        }
    }

    int y;
    y=temp.F;
    int cnt=0;
    forl(i,m)
    {
        if(a[i].F==x || a[i].S==x || a[i].F==y || a[i].S==y)
            cnt++;
    }
    if(cnt==m)
        yes=true;
    y=temp.S;
    cnt=0;
    forl(i,m)
    {
        if(a[i].F==x || a[i].S==x || a[i].F==y || a[i].S==y)
            cnt++;
    }
    if(cnt==m)
        yes=true;
}
int main()
{
    cin>>n>>m;
    
    b.resize(n+1);
    a.resize(m);
    forl(i,m)
    {
        int t1,t2;
        cin>>t1>>t2;
        a[i]=mp(t1,t2);
        b[t1].pb(i);
        b[t2].pb(i);
    }
    fore(i,n)
    {
        if(yes) break;
        if(b[i].size()==m)
            yes=true;
        else if(b[i].size()>=m/2)
            check(i);
    }
    if(yes)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}