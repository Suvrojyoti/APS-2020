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
	ll t,n,m=9999999999,a,b,k,i,l;
	cin>>n>>t;
	i=1;
	while(n--)
	{
		cin>>a>>b;
		if(a>=t)
		{
			if(a-t<m)
				{
					m=a-t;
					k=i;
				}
		}
		else
		{
			l=(t-a)/b;
			if((t-a)%b!=0)
				l++;
			if(a+l*b-t<m)
			{
				m=a+l*b-t;
				k=i;
			}
		}
		//cout<<m<<" ";
		i++;
	}
	cout<<k;
	


	return 0;
}