#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
	#endif

	ll n,arr[100005],pfx[100005],i,sum,q,l,r;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	pfx[0]=0;
	for(i=0;i<n;i++)
		pfx[i+1]=pfx[i]+arr[i];
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		cout<<(pfx[r]-pfx[l-1])/10<<endl;
	}



	
	
	return 0;
}