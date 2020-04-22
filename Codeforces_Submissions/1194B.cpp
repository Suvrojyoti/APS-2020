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
	ll n,m,q,i,j,t;
	cin>>q;
	while(q--)
	{
		cin>>n>>m;
		char c[n+5][m+5];
		ll arr[n+5][m+5];
		memset(arr,0,(n+2)*(m+2)*sizeof(arr[0][0]));
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>c[i][j];
			}
		}
		t=0;
		for(i=0;i<n;i++)
		{
			t=0;
			for(j=0;j<m;j++)
			{
				if(c[i][j]=='*')
						t++;
			}
			for(j=0;j<m;j++)
			{
				arr[i][j]+=t;
			}
 
		}
		/**/
		for(i=0;i<m;i++)
		{
			t=0;
			for(j=0;j<n;j++)
			{
				if(c[j][i]=='*')
					t++;
			}
			for(j=0;j<n;j++)
			{
				if(c[j][i]=='.')
					arr[j][i]+=t+1;
				else
					arr[j][i]+=t;
				
			}
		}
	/*	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
*/
		ll mn=9999999999;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				mn=min(mn,m+n-arr[i][j]);
		}
		if(mn<0)
		    cout<<"0"<<endl;
		 else
		cout<<mn<<endl;
	}
	return 0;
}