#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif
	ll i,test,n,l,t,r,d,a,b,t1,t2,t3,t4;
	cin>>test;
	while(test--)
	{
		cin>>n;
		l=-100000;
		t=100000;
		r=100000;
		d=-100000;
		for(i=0;i<n;i++)
		{
			cin>>a>>b>>t1>>t2>>t3>>t4;
			if(t1==0)
				l=max(l,a);
			if(t2==0)
				t=min(t,b);
			if(t3==0)
				r=min(r,a);
			if(t4==0)
				d=max(d,b);
		}
		if(l<=r&&d<=t)
			cout<<"1 "<<l<<" "<<t<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}