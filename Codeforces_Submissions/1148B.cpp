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
	
	long long int n,m,t1,t2,k,i,a,sum=0,j;
	
	cin>>n>>m>>t1>>t2>>k;
	vector <long long int> arr(n),arr1(m);
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		arr[i]+=t1;
		
	}
	
	for(j=0;j<m;j++)
	{
		cin>>arr1[j];
		
	}
	
	if(k>=min(n,m))
	{
		cout<<"-1";
		exit(0);
	}
	for(i=0;i<=k;i++)
	{
		a=(lower_bound(arr1.begin(),arr1.end(),arr[i])-arr1.begin());
		
		
		a=a+k-i;
		if(a>=m)
		{
			cout<<"-1";
			exit(0);
		}
		sum=max(sum,arr1[a]+t2);

	}
	cout<<sum;
	return 0;
}