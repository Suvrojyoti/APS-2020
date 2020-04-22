#include<bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
ll n,i,sep[101010],mo=998244353,j,has,x;
vector<string> v[99];
ll bes[99],z[99];
string s;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	sep[0]=1;
	for(i=1;i<=100;i++)
		sep[i]=(sep[i-1]*10LL)%mo;
	for(i=1;i<=n;i++)
	{
		cin>>s;
		x=s.length();
		reverse(s.begin(),s.end());
		v[x].pb(s);
		bes[x]++;
	}
	ll ii,jj;
	for(ii=1;ii<=10;ii++)
		for(jj=1;jj<=10;jj++)
		{
			if(jj<=ii)
			{		
				for(j=0;j<(ii+jj);j++)
					z[j]=0;
				for(j=0;j<jj;j++)
					z[j*2]=1;
			}
			else
			{
				for(j=0;j<(ii+jj);j++)
					z[j]=1;
				for(j=0;j<ii;j++)
					z[j*2+1]=0;
			}
			// if(!bes[ii])continue;
			// for(j=0;j<(ii+jj);j++)
			// 	cout<<z[j];
			// cout<<"\n";
			for(i=0;i<bes[ii];i++)
			{
				//s=v[ii][i];
				ll K=0;
				for(j=0;j<(ii+jj);j++)
				{
					ll tem;
					if(z[j]==0)
					{
						tem=(sep[j]*(v[ii][i][K]-'0'))%mo;
						has=(has+tem*bes[jj])%mo;
						// if(bes[jj])
						// {
						// 	cout<<i<<" "<<j<<" "<<tem<<"\n";
						// }
						K++;
					}
				}
			}
			for(i=0;i<bes[jj];i++)
			{
				//s=v[ii][i];
				ll K=0;
				for(j=0;j<(ii+jj);j++)
				{
					ll tem;
					if(z[j]==1)
					{
						tem=(sep[j]*(v[jj][i][K]-'0'))%mo;
						has=(has+tem*bes[ii])%mo;
						K++;
					}
				}
			}
		}
	cout<<has<<"\n";
}