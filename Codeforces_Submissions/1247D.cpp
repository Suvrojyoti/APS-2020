#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;

map<vector<pair<ll,ll> > ,ll> m;
vector<pair<ll,ll> > v[100001];
ll vis[100001];
ll n,k;
void sieve()
{
	for(ll i=2;i<100001;i++)
	{
		if(vis[i]!=0)
			continue;
		for(ll j=2;j*i<100001;j++)
		{
			ll num=i*j,co=0;
			while(num%i==0)
			{
				num/=i;
				co++;
			}
			if(co%k!=0)
				v[i*j].pb(make_pair(i,co%k));
		
			vis[i*j]++;
		}
	}
	for(ll i=2;i<100001;i++)
	{
		if(vis[i]==0)
		{
			v[i].pb(make_pair(i,1));
		}
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	cin>>n>>k;
	sieve();
	ll a[n];
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		vector<pair<ll,ll> > vec;
		for(ll j=0;j<v[a[i]].size();j++)
		{
			vec.pb(make_pair(v[a[i]][j].first,k-v[a[i]][j].second));
			
		}
		ans+=m[vec];
		
		m[v[a[i]]]++;
	}
	cout<<ans<<endl;
	return 0;
}