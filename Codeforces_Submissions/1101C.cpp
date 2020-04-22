#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define f first
#define s second
 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,tmp=-1,mx=0,l,r;
        cin >> n;
        pair<ll,pair<ll,ll> > arr[n];
        ll ans[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i].f >> arr[i].s.f;
            arr[i].s.s=i;
        }
        sort(arr,arr+n);
        mx=arr[0].s.f , ans[arr[0].s.s]=1;
        for (int i=1; i<n; i++)
        {
            if (arr[i].f <= mx)
            {
                mx=max(mx,arr[i].s.f);
                ans[arr[i].s.s]=1;
            }
            else
            {
                tmp=i; break;
            }
        }
 
        if (tmp==-1) cout << tmp << "\n";
        else
        {
            for (tmp; tmp<n; tmp++)
                ans[arr[tmp].s.s]=2;
            for (int i=0; i<n; i++)
                cout << ans[i] << " ";
            cout << "\n";
        }
    }
 
    return 0;
}