#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;
const int N = 2e5+5; // limit for array size
int n;             // array size
int t[2 * N];

void build()
{ // build the tree
    for (int i = n - 1; i > 0; --i)
        t[i] = max(t[i << 1] , t[i << 1 | 1]);
}

int query(int l, int r)
{ // sum on interval [l, r)
    int res = -1;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l & 1)
            res =max(res, t[l++]);
        if (r & 1)
            res = max(res,t[--r]);
    }
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

ll test,m,i,j,arr[N],arr1[N];
cin>>test;
while (test--)
{
    cin>>m;
    
    for(i=0;i<m;i++)    
        cin>>arr[i];
    vector <pair<ll,ll>> v;
    ll t1,t2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t1>>t2;
        v.pb({t1,t2});
    }
    for(i=0;i<=2*n+2;i++)
        t[i]=0;
    sort(v.begin(),v.end());
    i=0;
    for(auto it:v)
    {
        arr1[i]=it.first;
        t[n+i]=it.second;
        i++;
    }
    build();
    j=0;
    ll mx=-1,cnt=1;
    bool flag=0;
    // for(i=0;i<n;i++)
    //     cout<<arr1[i]<<" "<<t[n+i]<<endl;
    // cout<<m<<endl;
    for(i=0;i<m;i++)
    {
        mx=max(mx,arr[i]);
        ll ind=lower_bound(arr1,arr1+n,mx)-arr1;
        // cout<<i<<" "<<ind<<"\n";
        if(ind==n)
        {
            
            // cout<<"****";
            flag=1;
            break;
        }
        ll ed=query(ind,n);
        if(ed>=i-j+1)
            continue;
        else
        {
            // cout<<j<<"*\n";
            j=i;
            mx=arr[i];
            cnt++;
        }
        

    }
    if(flag)
    {
        cout<<"-1";
        flag=0;
    }
    else
    {
        cout<<cnt;
    }
    cout<<endl;
    
}
    return 0;
}