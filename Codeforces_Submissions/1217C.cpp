#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a, ll b){ if(a % b == 0) return a / b; return a / b + 1;}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,n,i,j,arr[200005],sum,k;
string s;
cin>>test;
while (test--)
{
    cin>>s;
    n=s.length();
    reverse(s.begin(), s.end());
    sum=0;
    memset(arr,0,(n+2)*sizeof(arr[0]));
    ll temp=0;
    for(i=0;i<n;i++)
    {
        arr[i+1]+=arr[i];
        if(s[i]=='1')
            arr[i+1]++;
    }
    // for(i=0;i<=n;i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    ll lim=min(18LL,n);
    set <pair<ll,ll>> st;
    for(k=1;k<=lim;k++)
    {
        temp=0;
        for(j=0;j<k;j++)
        {
            if(s[j]=='1')
                temp=temp+pow(2,j);
        }
        
        // cout<<k<<" "<<temp<<endl;
        ll l=0,r=k-1,len=k;
        while(r<n)
        {
            
            if (temp <= n - l and temp >= k and arr[temp + l ] - arr[l] == __builtin_popcount(temp) and temp!=0 and st.find({l,temp})==st.end())
            {
                sum++;
                // cout<<l<<" "<<r<<" "<<temp<<endl;
                st.insert({l,temp});
            }
            temp/=2;
            l++;
            r++;
            if(s[r]=='1')
                temp+=pow(2,r-l);
        }
    }
    cout<<sum<<endl;

}
return 0;
}