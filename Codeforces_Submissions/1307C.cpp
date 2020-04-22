#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
// #define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;

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
ll i,j,n,mx=0;
string s;
cin>>s;
map <string,ll> mp;
map <char,ll> mp1;
for(auto it:s)
{
    for(i=0;i<26;i++)
    {
        char c='a'+i;
        string s1;
        s1+=c;
        s1+=it;
        // cout<<s1<<endl;
        mp[s1]+=mp1[c];          
        mx=max(mx,mp[s1]);
    }
    mp1[it]++;
    // cout<<mp1[it]<<endl;
}
for(auto it:mp1)
    mx=max(mx,it.second);
cout<<mx;
return 0;
}