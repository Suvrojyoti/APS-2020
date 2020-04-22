#include<bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define	ln(a,b)		((a==(b-1))?'\n':' ')
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair

using namespace std;

ll ar[10005];

ll check(vi v1,vi v2)
{
	memset(ar,0,sizeof ar);

	for(auto i:v1) ar[i]++;

	for(auto i:v2) ar[i]++;

	for(ll int i=0;i<10005;i++) if(ar[i]==2) return 1;
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);


	ll m,n;
	cin>>m>>n;
	vector <ll> arr[m];
	rep(i,0,m)
	{
		ll sz;
		cin>>sz;
		rep(j,0,sz)
		{
			ll tmp;
			cin>>tmp;
			arr[i].pb(tmp);
		}
	}
	rep(i,0,m)
	{
		rep(j,i+1,m)
		{
			if(check(arr[i],arr[j])==0) 
			{
				cout<<"impossible";
				return 0;
			}
		}
	}
	cout<<"possible";
	return 0;
}