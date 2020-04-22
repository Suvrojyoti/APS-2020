#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


ll n,k,i,j;
cin>>n>>k;
queue <ll> q;
set <ll> s;
for(i=0;i<n;i++)
{
    ll t;
    cin>>t;
    if(s.find(t)==s.end())
    {
        q.push(t);
        s.insert(t);
    }
    else
        continue;
    if(q.size()>k)
    {
        ll p=q.front();
        q.pop();
        s.erase(p);
    }
        
}
cout<<q.size()<<endl;
vector<ll> v;
while(!q.empty())
{
    ll t=q.front();
    v.push_back(t);
    //cout<<t<<" ";
    q.pop();
}
reverse(v.begin(),v.end());
for(auto it: v)
    cout<<it<<" ";


return 0;
}