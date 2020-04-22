#include<bits/stdc++.h>
using namespace std;
long long int arr[300005],n,m;

long long int ok( long long int x)
{
	long long int i,prev;
	
	prev=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>=prev)
		{
			if(x<m-arr[i]+prev)
				prev=arr[i];

		}
		else
		{
			if(prev-arr[i]>x)
				return 0;
		}

	}
	return 1;
}


int main()
{
/*	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
	#endif*/
	long long int l,r,md,x,i;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>arr[i];
	l=0; r=m; int y=100;
	//cout<<l<<r;
	while(l<r)
	{
		md=(l+r)/2;
	//	cout<<md<<"\n";
		if(ok(md))
			r=md;
		else
			l=md+1;
		y--;
	}
/*	if(ok(l))
		cout<<l;
	else
*/		cout<<r;
	return 0;
}