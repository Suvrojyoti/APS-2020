#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif
	ll test,n,k,i,j;
	cin>>test;
	while(test--)
	{
		cin>>n>>k;
		ll arr[n+10],sum=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]%2==1)
				sum++;
		}
		//cout<<sum<<endl;

		if(sum<k)
		{
			cout<<"NO"<<endl;
			continue;
		}
		if((sum-k-1)%2==0)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else
		{
			cout<<"YES\n";
			ll t=0;
			for(i=0;t<k-1&&i<n;i++)
			{
				if(arr[i]%2==1)
				{
					cout<<i+1<<" ";
					t++;
				}
			}
			cout<<n<<endl;
		}

		
	}
	return 0;
}