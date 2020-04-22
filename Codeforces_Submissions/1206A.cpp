#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n,a[500],b[500],i,m;
    set <ll> s1,s2;
    vector <ll> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s1.insert(a[i]);
    }

    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        s2.insert(b[i]);
    }

    for(i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            ll t=a[i]+b[j];
            if(s1.find(t)==s1.end()&&s2.find(t)==s2.end())
            {
                cout<<a[i]<<" "<<b[j];
                exit(0);
            }

        }
    }
    return 0;
}