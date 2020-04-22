#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
vector<ll> v;
ll a, b, ac, bc, k;
ll bs(ll m)
{
    ll a1 = m / a;
    ll b1 = m / b;
    ll sum = 0;
    sum = v[a1] * ac + v[b1] * bc;
    sum/=100;
    // cout<<sum<<" ";
    //  cout<<"m "<<m<<" a1 "<<a1<<" b1 "<<b1<<" ac "<<ac<<" bc "<<bc<<" sum "<<sum<<endl;
    if (sum < k)
        return 0;
    return 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test, n, arr[200005], i;
    cin >> test;
    while (test--)
    {
        cin >> n;
        // v.clear();
        for (i = 1; i <=n; i++)
            cin >> arr[i];
        sort(arr+1, arr +1+ n,  greater<int>());
        
        v.clear();
        v.pb(0);
        for (i = 1; i <= n; i++)
            v.pb(v[i - 1] + arr[i]);
        // for(auto it:v)
        //     cout<<it<<" ";
        // cout<<endl;
        // reverse(v.begin(), v.end());
        cin >> ac >> a >> bc >> b >> k;
        if (!bs(n))
        {
            cout << -1 << endl;
            continue;
        }
        ll l=0,r=n;
        while(l<r)
        {
            ll m=(l+r)/2;
            // cout<<l<<" "<<r<<" ";
            if(!bs(m))
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
            // cout<<endl;
            
        }
        if(bs(l))
            cout<<l<<endl;
        else
        {
            cout<<l+1<<endl;
        }
        
        // cout<<"adas";
    }
    return 0;
}