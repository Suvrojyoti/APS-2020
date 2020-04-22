#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
// #define
using namespace std;

const ll INF = 1e18L + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test,n,i,j,arr[400005],sum=0;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        arr[i]=-1;
        vector <ll> v;
        sum=0;
        for(i=0;i<n;i++)
        {
            ll t=1;
            while(i<n&&arr[i]==arr[i+1])
            {
                t++;
                i++;
            }
            v.pb(t);
           
        }
        sum=n;
        ll g=v[0];
        ll s=0;
        i=1;
        while(i<v.size()&&s<=g)
        {
            s+=v[i]; i++;
        }
        if(i==n)
        {
            cout<<"0 0 0\n";
            continue;
        }
        ll b=0;
        while(i<v.size()&&b<=g)
        {
            b+=v[i]; i++;
        }
        if(g+s+b>sum/2)
        {
            cout<<"0 0 0\n";
            continue;
        }
        // cout<<g<<" "<<s<<" "<<b<<endl;
        // cout<<sum/2<<endl;
        while(i<v.size()&&g+s+b<=sum/2)
        {
            b+=v[i];
            i++;
        }
        b-=v[i-1];
        cout<<g<<" "<<s<<" "<<b<<endl;
    }
return 0;
}