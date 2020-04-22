#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif
	ll x,y,k,t;
	ll r,i;
	cin>>r;
	if(r==1)
	{
		cout<<"NO";
		exit(0);
	}
	for(i=1;i<r&&i<1000000;i++)
	{
		x=i;
		t=(r-1-pow(x,2)-x)/(2*x);
		if(pow(x,2)+2*x*t+x+1==r&&t>0)
		{
			cout<<i<<" "<<t;
			exit(0);
		}

	}
	cout<<"NO";
	return 0;
}