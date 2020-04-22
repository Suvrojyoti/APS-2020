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
	ll n,m,h,arr[105][105],l[105],f[105],i,j,flag;
	cin>>n>>m>>h;
	for(i=0;i<m;i++)
		cin>>f[i];
	for(i=0;i<n;i++)
		cin>>l[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==1)
				arr[i][j]=min(l[i],f[j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	


	return 0;
}