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
	ll n,arr[200005],i,t,t1;
	cin>>n;
	for(i=0;i<n;i++)
	{
			cin>>arr[i];	
			if(arr[i]==0)
				t=i;
			else
				t1=i;
	}
	cout<<min(t,t1)+1<<endl;
	return 0;
}