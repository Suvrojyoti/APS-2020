#include<bits/stdc++.h>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
	#endif
	
	long long int n,m,arr[300000],i,sum=999999999,mx;
	cin>>n>>m;
	cin>>arr[0];
	mx=arr[0];
	for(i=1;i<n;i++)
	{
		cin>>arr[i];

		if(arr[i]<arr[i-1])
		{
			sum=min(sum,m-arr[i-1]+mx);
			sum=min(sum,arr[i-1]-arr[i]);
		}
		else
			mx=arr[i];
	}
	if(sum==999999999)
		cout<<"0";
	else

	cout<<sum;
	return 0;
}