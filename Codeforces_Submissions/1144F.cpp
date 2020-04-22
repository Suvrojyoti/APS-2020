#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector <ll> v[200005];
bool vis[200005],arr[200005];
void dfs(ll a,ll x)
{
    vis[a]=1;
    arr[a]=x;
   // cout<<a<<" "<<x<<"\n";
    for(auto it:v[a])
    {
        if(!vis[it])
        {
            dfs(it,(x+1)%2);
            
        }
        else
        {
            //ll k=1;
            if(arr[it]!=(x+1)%2)
            {
                cout<<"NO";
                exit(0);
            }
        }
    }
    
}
int main()
{
    ll n,m,i,a[200005];
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        ll a1,b;
        cin>>a1>>b;
        a[i]=b;
        v[a1].push_back(b);
        v[b].push_back(a1);
    }
    ll k=1;
    dfs(1,k);
    cout<<"YES"<<endl;
    for(i=0;i<m;i++)
    {
        //cout<<a[i]<<" ";
        cout<<arr[a[i]];
    }
    return 0;
}