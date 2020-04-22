#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll test,a,b,n,i,j;
    cin>>test;
    while(test--)    
    {
        cin>>a>>b;
        
        vector<pair<ll,ll>> v;
        ll sum=0;
        for(i=0;i<a;i++)
        {
            ll temp;
            cin>>temp;
            v.pb({temp,i});
            sum+=temp;
        }
        sort(v.begin(),v.end());
        if(b<a)
        {
            cout<<"-1\n";
            continue;
        }
        if (a == 2)
        {
            cout << "-1" << endl;
            continue;
        }
        sum=sum*2;
        b-=a;
        sum+=(v[0].first+v[1].second)*b;
        cout<<sum<<endl;
        for(i=1;i<a;i++)
            cout<<i<<" "<<i+1<<endl;
        cout<<a<<" "<<1<<endl;
        for(i=0;i<b;i++)
            cout<<v[0].second+1<<" "<<v[1].second+1<<endl;

    }
    return 0;
}