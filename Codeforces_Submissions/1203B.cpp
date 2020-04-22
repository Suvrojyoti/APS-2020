#include<bits/stdc++.h>
#define int long long int
using namespace std;
main()
{
     
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,k,n;
		cin>>n;
		int a[4*n];
		for(i=0;i<4*n;i++)
		cin>>a[i];
		sort(a,a+4*n);
		int p=0;
		int area=a[0]*a[4*n-1];
		for(i=0;i<2*n;i=i+2)
		{
			if(a[i]==a[i+1]&&a[4*n-1-i]==a[4*n-i-2]&&a[i]*a[4*n-1-i]==area)
			continue;
			else
			{
				p=1;
				break;
			}
		}
		
		if(p==0)
		cout<<"yes\n";
		else
		cout<<"no\n";
	}
}