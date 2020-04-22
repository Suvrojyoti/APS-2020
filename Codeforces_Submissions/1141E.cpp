#include<bits/stdc++.h>
using namespace std;
#define inf 999999999999999999999999
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif
    

	ll h,n;
	cin>>h>>n;
	ll a[n];
	ll i;
	ll flag=0;
	for(i=0; i<n; i++)
		cin>>a[i];
	for(i=1; i<n; i++)
		a[i]=a[i]+a[i-1];
	for(i=0; i<n; i++)
	{
		if(a[i]+h<=0)
		{
			cout<<i+1<<endl;
			flag=1;
			break;
		}	
	}
	if(flag==0)
	{
		if(a[n-1]>=0)
			cout<<"-1"<<endl;
		else
		{
			ll mini=inf;
			for(i=0; i<n; i++)
			{
				ll x=h+a[i];
				ll z=ceil((-1*x)/(a[n-1]*1.0));
				z=n*z+i+1;
				mini=min(mini,z);
			}
			cout<<mini<<endl;
		}
	}
	return 0;
}