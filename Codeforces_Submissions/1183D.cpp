#include<bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
ll t,n,i,a[202020],d[202020],e[202020],has,sisa,z[202020];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--)
	{
		vector<ll> isi;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			d[a[i]]++;
			e[a[i]]++;
		}
		for(i=1;i<=n;i++)
		{
			d[a[i]]--;
			if(d[a[i]]==0)
				z[e[a[i]]]++;
		}
		has=0;
		sort(isi.begin(),isi.end());
		reverse(isi.begin(),isi.end());
		sisa=0;
		for(i=n;i>=1;i--)
		{
			z[i]+=sisa;
			if(z[i])
			{
				has+=i;
				sisa=z[i]-1;
			}
			else
				sisa=0;
		}
		cout<<has<<"\n";
		for(i=1;i<=n;i++)
		{
			d[a[i]]=0;
			e[a[i]]=0;
			z[i]=0;
		}
	}
}