#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int mod=998244353;
int pd(int x)
{
	for(int i=2;i<=sqrt(x);i++)
	if(x%i==0)
	return 0;
	return 1;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	ll m=n;
	while(!pd(m))
	{
		m++;
	}
	cout<<m<<endl;
	for(ll i=1;i<n;i++)
	cout<<i<<" "<<i+1<<endl;
	cout<<n<<" "<<1<<endl;
	m-=n;
	for(ll i=1;i<=m;i++)
	cout<<i<<" "<<n-i<<endl;
}