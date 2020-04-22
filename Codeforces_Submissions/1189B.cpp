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

	ll n,arr[100005],t,i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	if(arr[n-1]>=arr[n-2]+arr[n-3])
		cout<<"NO";
	else
	{
		cout<<"YES"<<endl;
		for(i=0;i<n-2;i++)
			cout<<arr[i]<<" ";
		cout<<arr[n-1]<<" "<<arr[n-2];
	}


	
	
	return 0;
}