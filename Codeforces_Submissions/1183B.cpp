#include<bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
ll t,n,k,a[110],i;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+1+n);
		if(abs(a[1]-a[n])>k*2)
			cout<<-1<<"\n";
		else
			cout<<a[1]+k<<"\n";
	}
}