#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test,h,n,arr[200005],i;
    cin>>test;
    while(test--)
    {
        cin >> h >> n;
        for(i=0;i<n;i++)
        cin>>arr[i];
        ll t=h,cnt=0,cnt1=0;
        i=0;
        if(n==h)
        {
            cout<<"0"<<endl;
            continue;
        }
        while(i<n&&arr[i]==t)
        {
            i++;
            t--;
            cnt++;
        }
        if(!(cnt%2))
            cnt1++;
        // cout<<cnt1<<" "<<i<<" ";
        while(i<n)
        {
            t=arr[i];
            cnt=0;
            while(i<n&&arr[i]==t)
            {
                i++;
                t--;
                cnt++;
            }
            if(i==n&&arr[i-1]==1 and cnt%2)
            {
                cnt1--;
                // cout<<"pppop "<<cnt1<<" ";
            }
            if(cnt%2)
                cnt1++;
        }
        cout<<cnt1<<endl;
    }   
    return 0;
}