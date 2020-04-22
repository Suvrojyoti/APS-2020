#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 2e5+5;

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
ll test,n,i,j;
cin>>test;
while(test--)
{
    cin>>n;
    vector <ll> v;
    rep(i,0,n)
    {
        cin>>j;
        v.pb(j);
    }
    if(count(v.begin(),v.end(),v[0])==n)
    {
        cout<<"1\n";
        rep(i,0,n)
            cout<<"1 ";
        cout<<endl;
        continue;
    }
    if(n%2==0)
    {
        cout<<"2\n";
        rep(i,0,n)
        {
            if(i%2)
                cout<<"1 ";
            else
                cout<<"2 ";
        }
        cout<<endl;
        continue;
    }
    bool flag=0;
    ll idx=-1;
    rep(i,0,n)
    {
        if(v[i]==v[(i+1)%n])
        {
            flag=1;
            idx=i+1;
            // cout<<i<<" "<<idx<<"\n";
            break;
        }
    }
    if(flag)
    {
        ll t=1;
        // cout<<idx<<" "<<i<<endl;
        cout<<"2\n";
        rep(i,0,n)
        {
            if(i==idx)
            {
                t=(t+1)%2;
            }
            if(t==1)
            {
                cout<<"2 ";
                t=0;
            }
            else
            {
                cout<<"1 ";
                t=1;
            }       
        }
        cout << endl;
        continue;
    }
    ll t=1;
    cout<<"3\n";
    rep(i,0,n-1)
    {
        cout<<t+1<<" ";
        t=(t+1)%2;
    }
    cout<<"3 ";
    cout<<endl;
    
}
return 0;
}